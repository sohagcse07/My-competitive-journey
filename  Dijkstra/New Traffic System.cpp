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

//https://lightoj.com/problem/new-traffic-system
const int mx = 1e4+123;

ll dist[15][mx];

vector < vector<int> > adj[mx];



void dijkstra ( int s , int n , int d ){

	for ( int i=0; i<=d; i++ ){
		for ( int j=0; j<n; j++ ){

			dist[i][j] = infLL ;
		}
	}

	dist[0][s] = 0;

	priority_queue < vector<ll> , vector<vector<ll>> , greater < vector<ll>>> pq;

	pq.push ( { 0 , 0 , s });


	while ( !pq.empty() ){

		ll curD = pq.top()[0];

		int cnt = pq.top()[1];

		int u = pq.top()[2];

		pq.pop();


		if ( dist[cnt][u] < curD ) continue;

		for ( auto e:adj[u] ){

			int v = e[0];

			ll w = e[1];

			int type = e[2];


			if ( cnt + type <= d && dist[cnt][u] + w < dist[cnt+type][v] ){

				dist[cnt+type][v] = dist[cnt][u] + w ;

				pq.push ( { dist[cnt+type][v] , cnt+type , v });

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
  cin>>t;


  for ( int tc=1; tc<=t; tc++ ){

  	int n , m , k , d;
  	cin>> n >> m >> k >> d;

  	for ( int i=0; i<n; i++ ) adj[i].clear();

  	for ( int i=0; i<m; i++ ){

  		int u , v , w;
  		cin>> u >> v >> w;

  		adj[u].PB ( { v , w , 0 }); // u--->v , cost , type

  	}


  	for ( int i=0; i<k; i++ ){

  		int u , v , w;
  		cin>> u >> v >> w;

  		adj[u].PB ( { v , w , 1 }); // type 1 
  	}


  	dijkstra ( 0 , n , d );


  	ll ans = infLL;

  	for ( int i =0; i<=d; i++ ){

  		ans = min ( ans , dist[i][n-1] );
  	}


  	if ( ans == infLL){
  		cout<< "Case " << tc << ": Impossible\n";
  	}
  	else cout<< "Case " << tc << ": " << ans << endl;

  }







    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be