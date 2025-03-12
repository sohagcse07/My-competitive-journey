#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

const int mx = 1e5+12;

//bool vis[mx]; viss arr dorkar hoy na tree te dfs calaile but vis use kora jay problem hoy na
vector<int> adj[mx];


void dfs ( int vertex , int par ){


	for (auto chiled: adj[vertex] ){

		if ( chiled == par ) continue; // parent save rakteci ami parent e jabo na thaile e hobe

		dfs(chiled , vertex );

	}

}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);



  int n , m;

  cin>>n>>m;


  for( int i=1; i<=m; i++ ){

  	int u , v;
  	cin>>u>>v;

  	adj[u].push_back(v);
  	adj[v].push_back(u);
  }


  dfs ( 1 , 0 );







  return 0;
}