#include <bits/stdc++.h>
using namespace std;


//https://cp-algorithms.com/graph/depth-first-search.html
const int mx = 1e5+123;

vector<int> adj[mx];

bool vis[mx];

bool dfs ( int vertex , int parent  ){ // v node and parent node

	vis[vertex] = true;


	bool isLoopExists = false;


	for (auto child:adj[vertex] ){

		if( vis[child] && child == parent ) continue; // par node and j v node e acci 2ta same hole continue
		
		if(vis[child] == 1) return true;; 

		 isLoopExists |= (dfs( child, vertex )); // or gate oparatin 1 ta true paile sobg gola k true kore dibe 
		 // true or false return korbe

	}


	return isLoopExists;
}


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int n , m;

  cin>>n>>m;


  for(int i=1; i<=m; i++ ){

  	int u , v;
  	cin>>u>>v;

  	adj[u].push_back(v);
  	adj[v].push_back(u);
  }


  bool isLoopExists = false;

  for(int i=1; i<=n; i++ ){

  	if( !vis[i] ){

  		if(dfs(i,0) == 1 ){

  			isLoopExists = true;
  		}
  	}
  }


  cout<<isLoopExists<<endl;


/*
8 6
1 2
2 3
2 4
3 5
6 7
5 1
//1,0 // true,false
*/



  return 0;
}