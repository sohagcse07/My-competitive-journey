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
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

//https://lightoj.com/problem/country-roads

// O ( V + E )
const int mx = 500+123;

vector<pair<int,int>> adj[mx];

ll dist[mx];


void dijkstra ( int s , int n ){

	for ( int i=0; i<n; i++ ){

		dist[i] = infLL;
	}


	dist[s] = 0;

	priority_queue < pair<ll,ll> , vector<pair<ll,ll>> , greater<pair<ll,ll>>> pq;

	pq.push( { 0 , s });


	while ( !pq.empty() ){

		int u = pq.top().S;

		ll curD = pq.top().F;
		pq.pop();


		for ( auto e:adj[u] ){

			int v = e.F;

			ll w = e.S; 

			ll mx_edge_cost = max ( curD , w ); // max(s-->u , u-->t)


			if ( mx_edge_cost < dist[v] ){

				dist[v] = mx_edge_cost;

				pq.push ( { dist[v] , v } );
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


  int t;
  cin>> t;


  for ( int tc=1; tc<=t; tc++ ){

  	int n , m;

  	cin>> n >> m;

  	for ( int i=0; i<n; i++ ) adj[i].clear();


  	for ( int i=1; i<=m; i++ ){

  		int u , v , w ;

  		cin>> u >> v >> w;

  		adj[u].PB ( { v , w });
  		adj[v].PB ( { u , w });
  	}

  	int t;cin>>t;


  	dijkstra ( t , n );

  	cout << "Case " <<tc<< ":\n";

  	for ( int i=0; i<n; i++ ){

  		if ( dist[i] == infLL ){

  			cout <<"Impossible\n";
  		}else{

  			cout<< dist[i]<<endl;
  		}
  	}


  }






    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be