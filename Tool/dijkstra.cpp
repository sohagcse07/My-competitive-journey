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
typedef vector<pii> vpii;
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

 
const int mx = 1e5+123;

int dis[mx];

vpii adj[mx];

void dijkstra ( int source , int node ){

	for(int i=0; i<node; i++ ) dis[i] = 1e9;

	dis[source] = 0;

	//priority_queue< pii , vpii , greater<pii> > pq; //sort valu , like 5.1 , 8.3
	priority_queue< pair<int,int> , vector<pair<int,int>> ,greater<pair<int,int>>> pq;
	pq.push( { 0 , source });

	while ( !pq.empty() ){

		int u = pq.top().S; //  u node 
		int curDis = pq.top().F;
		pq.pop();


		for ( auto v: adj[u] ){

			if ( curDis + v.S< dis[v.F] ){

				dis[v.F] = curDis + v.S;

				pq.push( {dis[v.F] , v.F} );
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


  int n , m;
  cin>>n>>m;

  for(int i=1; i<=m; i++ ){

  	int u , v , w ;
  	cin>>u>>v>>w;

  	adj[u].PB({ v , w }); // v = node , w = cost 
  	//adj[v].PB({ u , w }); // underected graph
  }

  dijkstra( 1, n );


  for(int i=0; i<n; i++ ){

  	cout << i <<": ";
  	cout<< dis[i] << endl;
  }




    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be