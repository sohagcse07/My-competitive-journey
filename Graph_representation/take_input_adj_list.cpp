#include <bits/stdc++.h>
using namespace std;

//https://www.shafaetsplanet.com/?p=211
const int mx = 1e5+123;

vector<int> adj[mx];

//vector<int> adj[4]; // vector<int> v1,v2,v3,v4 same khota 

// vi v1 { 2, 3 , 4 , 5 }

int32_t main() {
  #ifndef ONLINE_JUDGE
	  freopen("input.txt", "r", stdin);
	  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  int n,m; // node , edges

  cin>>n>>m;


  for(int i=1; i<=m; i++ ){

  	int u , v ; // u ---> v // v ---> u

  	cin>>u>>v;


  	adj[u].push_back(v); // 1: 2
  	adj[v].push_back(u); // 2: 1

  }




  for(int i=1; i<=n; i++ ){

  	cout<<"adjacent list of " << i << ": ";

  	for(auto u:adj[i] ){

  		cout<<u<<" ";
  	}
    cout<<endl;
  }







  return 0;
}