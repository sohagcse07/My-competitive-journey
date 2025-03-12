#include <bits/stdc++.h>
using namespace std;

const int mx = 1e3;

int graph[mx][mx];

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);



  int n , m; // n = node , m = edge 

  cin>> n >> m;

  for ( int i=0; i<m; i++ ){ // O(n^2) is sapce complexity

  	int u , v;
  	cin>> u >> v;

  	graph[u][v] = 1;
  	graph[v][u] = 1;
  }

  // jodi wt day input e then 


  for ( int i= 0; i<m; i++ ){

  	int u , v , wt;
  	cin>> u >> v >> wt;
  	graph[u][v] = wt;
  	graph[v][u] = wt;
  }


  // matrix use korar lav
  // jodi amake vole a[i][j] conencted ? and a[i][j] = wi ? 
  // ei 2 ter ans ami O(1) e dite parbo like 
  // ten ami jodi adj list use kori taile O(n) kaj kore bolbe je conencted ki na

  // like 
/*
  for ( auto u: adj[i]){
  	if ( u == j ){
  		// connected
  	}
  }
 */
/*
  if ( graph[i][j] == 1){
  	conencted 
  }
*/


  /*

  adj matrix er complexity besi thai amra adj list use kori 
  adj matrix   n <= 1e3 or 1e4 er modee kaj korte parbe 

  */

/*

n , m , wt
1 2 3
1 5 7
2 4 8
2 4 7
3 6 8
6 5 5
2 7 8

*/













  return 0;
}