#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int mx = 1e5+12;

vector <int> adj[mx];

int depth[mx] , height[mx];


void dfs ( int u , int par = 0 ){


	for ( auto v: adj[u] ){


		if ( v == par ) continue;

		depth[v] = depth[u] + 1 ;

		dfs ( v , u );

		height[u] = max ( height[u] , height[v] + 1 );
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


  int n ;

  cin>>n;


  for(int i=0; i<n-1; i++ ){

  	int u,v;
  	cin>>u>>v;

  	adj[u].push_back(v);
  	adj[v].push_back(u);
  }


  dfs ( 1  );

  for( int i=1; i<=n; i++ ){

  	cout << depth[i] << " " << height[i] << endl;
  }


/*
13
1 2
1 3
1 13
2 5
3 4
5 6 
5 7 
5 8
8 12
4 9
4 10
10 11
//
0 4
1 3
1 3
2 2
2 2
3 0
3 0
3 1
3 0
3 1
4 0
4 0
1 0
*/

  return 0;
}