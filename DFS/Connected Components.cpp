#include <bits/stdc++.h>
using namespace std;

#define endl "\n"


//https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/?purpose=login&source=problem-page&update=google
const int mx = 1e4;

vector<int> adj[mx];

bool vis[mx];


void dfs ( int u ){


	vis[u] = 1;


	for (auto v:adj[u] ){


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
  cout.tie(0);


  int n , m;

  cin>>n>>m;

  for(int i=1; i<=m; i++ ){

  	int u , v;

  	cin>>u>>v;

  	adj[u].push_back(v); 
  	adj[v].push_back(u);
  }


  int counter = 0;


  for(int i=1; i<=n; i++ ){

  	if( !vis[i] ){

  		dfs(i);

  		counter++;
  	}
  }


  cout<<counter<<endl;





  return 0;
}