#include <bits/stdc++.h>
using namespace std;


const int mx = 1e3+123;


vector < int > adj[mx];
vector < pair < int , int > > adj1[mx];

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);



  int n , m;

  cin>> n >> m; // space complexity is O ( n + m)

  for ( int i=0; i<m; i++ ){ // jodi wit na thake 

  	int u , v;
  	cin>> u >> v;
  	adj[u].push_back( v );
  	adj[v].push_back( u );
  }



  // jodei wit thake so use korbo vector of pair 

  // 1st valu node 2nd valu wit 


  for ( int i = 0; i<m; i++ ){

  	int u , v , wt;
  	cin>> u >> v >> wt;

  	adj1[u].push_back ( { v , wt });
  	adj1[v].push_back ( { u , wt });
  }








  return 0;
}