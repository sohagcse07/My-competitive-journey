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
/*
bellman ford diya moloto graph e cycal found kora hoy like 
jodi graph ta N porjonto run hoy thaile bojbo ete -nagative count acce and
jode graph ta N-1 porjonto opration run hoy thaile bojbo ete -negative cout nai */

// time complexity is : O ( n * m ) // n = node , m = edge
//https://www.geeksforgeeks.org/bellman-ford-algorithm-dp-23/
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=499
//https://cp-algorithms.com/graph/bellman_ford.html
struct info {

	int u , v , w;
};

const int mx = 1e3+123;

ll dist [mx];

vector<info> e;


bool bellmen_ford ( int s , int n , int m){

	for ( int i=0; i<n; i++ ) dist[i] = infLL;

	dist[s] = 0; // S-->S er dist is 0


	bool isCycle = false;

	for ( int i=1; i<=n; i++ ){

		isCycle = false; // eta diya bojbo je loop ta N-1 porjonto cole naki 
		// N porjonto cole 

		for ( int j=0; j<m; j++ ){

			int u  = e[j].u ;

			int v = e[j].v;

			int w = e[j].w;


			if ( dist[u] < infLL ){ // ans hoite pare so try kora dorker 

				if ( dist[u] + w < dist[v] ){ // relax

					dist[v] = max ( - infLL , dist[u] + w ); 
					isCycle = true;
				}
			}


		}
	}

	return isCycle;
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

  while ( t-- ){
  	e.clear(); // like memset
  	int n , m;
  	cin>>n>>m;

  	for (int i=0; i<m; i++ ){

  		int u , v , w;
  		cin>> u >> v >> w;

  		e.push_back( { u , v , w });
  	}


  	if ( bellmen_ford ( 0 , n , m ) == true ){

  		cout << "possible\n";
  	}else{

  		cout << "not possible\n";
  	}


  }



/*
2
3 3
0 1 1000
1 2 15
2 1 -42
4 4
0 1 10
1 2 20
2 3 30
3 0 -60
*/




    return 0;
}

