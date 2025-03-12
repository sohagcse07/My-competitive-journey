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
typedef vector<pll> vpll;
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
#define G greater

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

const int mx = 4e4+123;

ll dist[mx];

vpll adj[mx];


int dijkstra ( int n , int s ){

	for (int i=1; i<=n; i++ ) dist[i] = infLL;

	dist[1] = 0;

	priority_queue<pll,vpll, G < pll > > pq;

	pq.push( { 0 , 1 });

	while  ( !pq.empty() ){

		int u = pq.top().S;

		ll curD = pq.top().F;

		pq.pop();

		if ( curD < dist[u] ) continue;

		for ( auto v: adj[u] ){

			if ( curD + v.S < dist[v.F] ){

				dist[v.F] = curD + v.S;

				pq.push({ dist[v.F] , v.F });
			}
		}
	}


	int count = 0;

	for (int i=1; i<=n; i++ ){

		if ( dist[i] != infLL ) count++;
	}

	return count;
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

  	int n , m;

  	cin>>n>>m;

  	for (int i=1; i<=n; i++ ) adj[i].clear();

  	for (int i=1; i<=m; i++ ){

  		int u , v, w;
  		cin>>u>>v>>w;

  		adj[u].PB({ v , w });
  		adj[v].PB({ u , w });
  	}


  	int q;
  	cin>>q;

  	vi query(q);

  	for (int i=1; i<=q; i++ ){

  		cin>> query[i];
  	}

  	cout << "Case " << tc << ": ";

  	for (auto c: query ){

  		cout << dijkstra ( n , c ) << endl;
  	}


  }






    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be