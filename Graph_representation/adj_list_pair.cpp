#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

const int mx = 1e5+123;

vector<pair<int,int>> adj[mx];


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  int n,m;
  cin>>n>>m;

  for(int i=1; i<=m; i++){
  	int u,v,w;
  	cin>>u>>v>>w;

  	adj[u].push_back({v,w});
  	adj[v].push_back({u,w});
  }



   for(int i=1; i<=n; i++){
  	cout<<"adjacent_of " <<i<<": ";

  	for(auto u:adj[i])cout<<u.first<<" "<<u.second<<" ";

  	cout<<endl;
  }








  return 0;
}