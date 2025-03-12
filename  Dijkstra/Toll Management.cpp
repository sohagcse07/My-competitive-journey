//In the name of ALLAH

// Insallah one day success will be your

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
 
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define U upper_bound
#define L lower_bound
#define all(a) (a).begin(),(a).end()
#define mid(l,r) ((r+l)/2)

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 1000000000000000000;
#define MOD 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))



struct info {

	int u , v , w;
};


//https://lightoj.com/problem/toll-management
const int mx = 1e4+123;

vector<pii> adj[2][mx]; // adj[0] = source thake u node e // adj[1] = tink thake v node e reverse order 
// karon eta directed graph

ll dist[2][mx]; // dist[0] = s-->u jaber cost ta save korbe // dist[1] = t-->v t revers order e jaber 
// cost ta save korbe 

void dijkstra ( int s , int n , int f1 ){ // f1[0]/[1] // f1[0] min dis[0] and f1[1] min dis[1]


	for ( int i=1; i<=n; i++ ){

		dist[f1][i] = infLL;
	}

	dist[f1][s] = 0 ;

	priority_queue < pair < int,int> , vector<pair <int,int> > , greater<pair<int,int>>> pq;


	pq.push( { 0 , s });

	while ( !pq.empty() ){

		int u = pq.top().S;

		ll curD = pq.top().F;

		pq.pop();

		if ( dist[f1][u] < curD ) continue;


		for ( auto e:adj[f1][u] ){

			int v = e.F;

			int w = e.S;


			if ( curD + w < dist[f1][v] ){

				dist[f1][v] = curD + w;

				pq.push ( { dist[f1][v] , v });
			}
		}
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



  int T;

  cin>> T;

  for ( int tc = 1; tc<=T; tc++ ){

  	for ( int i=1; i<=mx; i++ ){

  		adj[0][i].clear();
  		adj[1][i].clear();
  	} 
  	int n , m , s , t , p ; // node , adj , source , tink , poket money

  	cin>> n >> m >> s >> t >> p;


  	vector<info> edge;

  	for ( int i=1; i<=m; i++ ) {

  		int u , v , w;
  		cin>> u >> v >> w;

  		adj[0][u].PB ( { v , w }); // s--> u 

  		adj[1][v].PB ( { u , w }); // t --> s

  		edge.PB ( { u , v , w });
  	}


  	dijkstra ( s , n , 0 ); // dist[0]  = s-->u node e jaber cost;

  	dijkstra ( t , n , 1 ); // dist[1] = t-->v node e jaber cost


  	ll ans  = -1 ;


// formula: d1[u] + w + d2[v] = ans 

  	for ( auto e:edge){

  		int u = e.u;

  		int v = e.v;

  		int w = e.w;

  		ll cost = dist[0][u] + w + dist[1][v] ;

  		// s-->u node normal order + w 
  		// t-->s node reverse order 

  		if ( cost <= p ){

  			ans = max ( ans , (ll)w );
  		}
  	}


  	cout << "Case " << tc << ": " << ans << endl; 

  }







    return 0;
}
