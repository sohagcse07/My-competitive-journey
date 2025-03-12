#include <bits/stdc++.h>
using namespace std;

#define endl "\n"


//https://cp-algorithms.com/graph/depth-first-search.html
//https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/

// O ( v + e )
const int mx = 1e5+123;

bool vis[mx];

vector<int> g[mx];

vector<vector<int>> cc;

vector<int> currnt_cc;

void dfs  ( int vertex ){

	vis[vertex] = true;

	currnt_cc.push_back ( vertex );
	for ( int child:g[vertex] ){

		if ( vis[child]) continue;

		dfs ( child );
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

  for ( int i=1; i<=m; i++ ){

  	int u , v ;
  	cin>> u >> v;


  	g[u].push_back ( v );
  	g[v].push_back ( u );

  }



  int cnt = 0;


  for ( int i=1; i<=n; i++ ){


  	if ( vis[i] == true ) continue;

  	currnt_cc.clear();

  	dfs(i);

  	cc.push_back ( currnt_cc);

  	cnt++;
  }

  cout<< cc.size() << endl;


  for ( auto c_cc:cc ){

  	for ( int vertex: c_cc ){

  		cout << vertex<<" ";
  	}
  	cout<<endl;
  }


/*

8 5
1 2
2 3
2 4
3 5
6 7
// 3

*/ 




  return 0;
}