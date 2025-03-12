#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

typedef vector<int> vi;

const int mx = 1e5+123;

vi adj[mx];
bool vis[mx];
int cnt ;

void dfs ( int u ){

	vis[u] = 1;

	cnt++;
	for(auto v:adj[u] ){

		if ( !vis[v] ){

			dfs(v);
		}
	}

	return;
}



int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int n,m;

  cin>>n>>m;


  for(int i=1; i<=m; i++ ){

  	int u,v;

  	cin>>n>>v;

  	adj[u].push_back(v);
  	adj[v].push_back(u);
  }



  int ans = 0 ;


  for(int i=1; i<=n; i++ ){

  	if ( !vis[i] ){

  		cnt = 0;

  		dfs(i);

  		ans = max ( cnt , ans );
  	}
  }








  return 0;
}