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
//https://lightoj.com/problem/instant-view-of-big-bang
struct info {

	int u , v, w;
};

// idea holo graph ta reveser korbo then dfs use kore negetive cycle bar korbo and negetive cycle thake koi koi jaite parteci ta print korbo 

const int mx = 1e3+123;

ll dist[mx];

bool vis[mx] , isRelaxad[mx];

vector<int> adj[mx];
vector<info> edge;

void dfs ( int u ){

	vis[u] = 1;

	for ( auto v:adj[u] ){

		if ( vis[v] == 0 ){

			dfs( v );
		}
	}
}


void BellmanFord ( int s , int n ){

	for (int i=1; i<=n; i++ ) dist[i] = infLL;

	dist[s] = 0;
	

	for (int i=1; i<=n; i++ ){

		for ( auto e:edge ){

			int u = e.u;
			int v = e.v;
			int w = e.w;

			if ( dist[u] + w < dist[v] ){

				dist[v] = dist[u] + w;


				if ( i == n ){

					isRelaxad[v] = 1;
				}
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

  for (int tc=1; tc<=t; tc++ ){
  	edge.clear();
  	int n , m;
  	cin>>n>>m;

  	for (int i=1; i<=n; i++ ) adj[i].clear();

  	mem( vis, 0 );
  	mem( isRelaxad, 0 );

  	for (int i=1; i<=m; i++ ){
  		int u , v , w;
  		cin>>u>>v>>w;
  		u++,v++; // to 0 base indx
  		edge.push_back({ v , u , w }); // reverse graph
  		adj[v].push_back(u); // reverse graph
  	}

  	BellmanFord( 1 , n );
  	bool done = false;

  	for (int i=1; i<=n; i++ ){

  		if ( isRelaxad[i]){ // cycle found

  			dfs( i );
  			done = true;
  		}
  	}


  	if ( !done ) cout<< "Case " << tc << ": " << "impossible\n";

  	else{

  		cout<<"Case " << tc << ":" ;

  		for (int i=1; i<=n; i++ ){ // cycle print

  			if ( vis[i] ){
  				cout<<" " <<i-1;
  			}
  		}
  		cout<<endl;

  	}
  }



    return 0;
}
