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

struct info {

	int u , v , w;
};
 

//https://lightoj.com/problem/extended-traffic
// class 12 M5

const int mx = 212+12;

int dist[mx];
int b[mx]; // busy-ness
vector<int>adj[mx];
vector<info> edge;
bool vis[mx], isRelaxed[mx];

void dfs ( int u ){

	vis[u] = 1;


	for ( auto v:adj[u] ){

		if ( vis[v] == 0 ){

			dfs ( v );
		}
	}
}

void BellmanFord ( int s , int n ){

	for(int i=1; i<=n; i++ ) dist[i] = inf;

	dist[s] = 0;

	for (int i=1; i<=n; i++ ){

		for ( auto e:edge ){

			int u = e.u;
			int v = e.v;
			int w = e.w;


			if ( dist[u] < inf ) {

				if ( dist[u] + w < dist[v] ){

					dist[v] = max( -inf , dist[u] + w );

					if ( i == n ){

						isRelaxed[v] = 1;
					}
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

  for ( int tc=1; tc<=t; tc++ ){
  	edge.clear();
  	int n;
  	cin>>n;

  	for (int i=1; i<=n; i++ ){
  		
  		cin>>b[i];

  		vis[i] = 0;
  		isRelaxed[i] = 0;
  		adj[i].clear();

  	}

  	int m;
  	cin>>m;

  	for ( int i=1; i<=m; i++ ){

  		int u , v ;
  		cin>>u>>v;

  		int dif = b[v] - b[u] ; // (busy-ness of destination - busy-ness of source)^3
  		int w = 1ll * dif * dif * dif ;

  		edge.push_back( { u , v , w });
  	}

  	BellmanFord ( 1, n );

  	for (int i=1; i<=n; i++ ){

  		if ( isRelaxed[i] ){

  			dfs ( i );
  		}
  	}

  	int q;

  	cin>>q;

  	cout<<"Case " << tc << ":\n";

  	while ( q-- ){

  		int node;
  		cin>>node;

  		if ( dist[node] == inf || vis[node] || dist[node] < 3 ){ // node e jaite parin nai || node ta negetive cycle e acce || node er cose < 3 
  			cout<<"?\n";
  		}else{

  			cout<< dist[node] << endl;
  		}
  	}


  }






    return 0;
}

/*

ide holo 

jodi graph e negetive cycle thake thaile cost all time < 0 hobe so 

prite korbo ? 

else hoile cost ta print korbo 

// ? print korte e ki koj korbo

source thake jodi kono node e jaite negetive cycle pore thaile ami cost ta N bar 

Oparation < 3 kore falte parbo thai ami ? print korbo and jodi normal cost o 
< 3 hoy thaile o ? print korbo and kono node e jaite na parle o ? print korbo 



// time complexity is :

O(n*m) * ( n + m ) * t // node , adge , tast case 

O (200*200) * (200+200) * 200 => 800,000,000 // 1s e run korbe no problem brooooo
*/ 

