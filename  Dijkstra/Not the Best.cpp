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



//https://lightoj.com/problem/not-the-best
const int mx = 5e3+123;

ll dist[3][mx];

vector<pii> adj[mx];

struct info
{

	int u , v , w ;
	
};


void dijkstra ( int s , int n , int f1 ){ // source , node , dis0[]/dis1[]

	for(int i=1; i<=n; i++ ) dist[f1][i] = infLL;

	dist[f1][s] = 0;

	priority_queue < pair<ll,ll> , vector<pair<ll,ll>> , greater<pair<ll,ll>>> pq;

	pq.push( { 0 , s });

	while ( !pq.empty() ){

		int u = pq.top().S;

		ll curD = pq.top().F;

		pq.pop();

		if ( dist[f1][u] < curD ) continue;

		for ( auto v:adj[u] ){

			if ( curD + v.S < dist[f1][v.F] ){

				dist[f1][v.F] = curD + v.S;

				pq.push( { dist[f1][v.F] , v.F });
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

  cin>>T;

  for (int tc = 1; tc<=T; tc++ ){

  	for (int i=1; i<=5e3; i++ ) adj[i].clear();

  	vector < info > edge ;	
  	
  	int n , m;

  	cin>>n>>m;

  	for ( int i=1; i<=m; i++ ){
  		
  		int u , v , w;
  		cin>>u>>v>>w ;

  		adj[u].PB({ v , w });
  		adj[v].PB( { u , w });

  		edge.PB ( { u , v , w });

  	}

  	dijkstra ( 1 , n , 0);
  	dijkstra ( n , n , 1);


  	ll s1 = dist[0][n]; // main sortest path
  	ll s2 = infLL; // need ans sortest path


  	for ( auto &e:edge ){

  		int u = e.u;
  		int v = e.v;
  		int wit = e.w;
  		ll curD = min ( dist[0][u] + dist[1][v] , dist[0][v] + dist[1][u]);
  		// source theke u node  +  tink theke v node 
  		// ,source theke v node +  tink theke u node 
  		// donoter min valu // dist0/dist1 diya korci

  		if ( curD + wit > s1 ){

  			s2 = min ( curD + wit  , s2 );
  		}

  		if ( curD + wit == s1 ){

  			s2 = min ( s2 , curD + ( wit * 3)); // backtraking
  		}
  	}


  	cout << "Case " << tc << ": " << s2 << endl;


  }






    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be