#include <bits/stdc++.h>
using namespace std;


// O (  v + e )
const int mx = 1e5+123;

bool vis[mx];

vector < int > adj[mx];

void dfs ( int u  ){

	
	vis[u] = 1;


	for ( auto v: adj[u] ){

		if ( vis[v] == 0 ){

			dfs ( v );
		}
	}

	return ;
}


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);




  int n , m;

  cin>> n >> m;

  for (int i=1; i<=m; i++ ){

  	int u , v ;

  	cin>>u>>v;

  	adj[u].push_back ( v );
  	adj[v].push_back ( u );
  }




  //dfs( 1 );


  int cnt = 0;


  for ( int i=1; i<=n; i++ ){

  	if ( vis[i] == 1 ) continue;

  	dfs( i );

  	cnt++;
  }

  cout<< cnt << endl;









  return 0;
}