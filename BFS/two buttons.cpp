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

 
void fraction(dl a){
    cout.unsetf(ios::floatfield);
    cout.precision(a);
    cout.setf(ios::fixed,ios::floatfield);
}

const int mx = 1e4+123;

bool vist[mx];

vi adj[mx];

int dist[mx];

void bfs ( int s  ){

	dist[s] = 0;

	vist[s] = 1;

	queue<int> q;

	q.push ( s );

	while ( !q.empty() ){

		int u = q.front();
		q.pop();


		for ( auto v: adj[u] ){

			if ( !vist[v] ){

				vist[v] = 1;

				dist[v] = dist[u] + 1;

				q.push( v );
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

  cin>> n>>m;

  int mxM = 0;

  if ( n == m ) return cout << 0 , 0;


  else if ( n > m ) return cout << n - m , 0 ;

  else  mxM = ( m - 1 ) * 2;


  for (int i=1; i<=mxM ; i++ ){

  	if ( i - 1 > 0 ) adj[i].PB( i-1);
  	if ( 2*i <= mxM )adj[i].PB ( 2*i);
  }


  for (int i=0; i<=n; i++ ) dist[i] = 1e5;


  mem( vist , 0 );

  bfs ( n );

  cout << dist[m]<<endl;





    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be