#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

// O ( M + Nloge2 (N))
//http://www.shafaetsplanet.com/?p=1500
//https://drive.google.com/file/d/1I9_uBNbBklvYIpDus1vTG190dMMrzOh5/view
//https://cses.fi/problemset/task/1671/
const int mx = 1e5+123;

vector<pair<ll,ll>> adj[mx];
ll dis[mx];


void dijkstra( int s , int n){ // source and node

	for(int i=0; i<=n; i++) dis[i] = inf; // all dis is inf valu
	dis[s] = 0; // source 0 thakbe all time

	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;

	pq.push(make_pair( 0 , s ));

	while( !pq.empty() ){

		int u = pq.top().second; // node
		ll curW = pq.top().first; // Curwight

		pq.pop();


		if( dis[u] < curW) continue; // important
		// all rady ami 1 = 8 calul kore rakci so ami 1 = 9 jokon asbe etaer jak kora bokami 
		// and TLE khaite pari so ignor korci


		for( auto &p: adj[u]){

			int v = p.first; // node v = 4 
			int w = p.second; // w = 3 

			if( curW + w < dis[v] ){ //relax operation
				// 0 + 3 < inf 
				dis[v] = curW + w; // dis[4] = 3;
				pq.push({dis[v] , v});  // 3 , 4 it's min 4 number node e source thake jaite 3 cost jay
				// then 3 , 4 er kaj korbo so..on
			}
		}
	}
	
}
/* // time complexity

node gola 1 bar kore access hoita ce  node = v 
potak bar egde gola o ek bar kore access hoitace karon ami relax kor 
kaser node ta te jaite ci so next dorar node ta amer valu gola k change korte parbe na

ege = E 

overoll complexity is: O(E + Vlog2(v)) 

// O( n log2(n) + m ) // n = node , m = egde

//  we know
pq er com is log2(n) 
*/

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

  	int u,v,w; // u , v node , w is wight
  	cin>>u>>v>>w;

  	adj[u].push_back({v,w});
  	adj[v].push_back(make_pair(u,w));
  }

  
  dijkstra(2,n);


  for(int i=0; i<n; i++){
  	cout<<i<<":";
  	cout<<dis[i] <<endl;;
  }cout<<endl;



/*

5 7 
2 1 2
2 0 6
1 3 3
1 4 6
3 4 5
0 4 3
3 2 7
//
0:6
1:2
2:0
3:5
4:8


*/





  return 0;
}