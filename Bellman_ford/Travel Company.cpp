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

struct  info 
{

	int u , v , w;
	
};

//https://lightoj.com/problem/travel-company
const int mx = 123+12;

int dist[mx];

vector<info> edge;


bool BellmanFord ( int  n ){

	for (int i=1; i<=n; i++ ) dist[i] = inf;


	for (int i=1; i<=n; i++ ){

		for (int j=0; j<edge.size(); j++ ){

			int u = edge[j].u;
			int v = edge[j].v;
			int w = edge[j].w;

			if ( dist[u] + w < dist[v] ){

				dist[v] = max ( -inf , dist[u] + w );

				if ( i == n ) return 1;
			}
		}
	}

	return 0;
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

  	int n , m , p;

  	cin>>n>>m>>p;

  	for (int i=1; i<=m; i++ ){

  		int u , v, income , ex;
  		cin>>u>>v>>income>>ex;
  		u++,v++;
  		int w = (ex * p) - income;

  		edge.push_back( { u , v , w });

  	}

  	if ( BellmanFord( n)){
  		cout<<"Case " << tc << ": YES\n"; 
  	}else{

  		cout<< "Case " << tc << ": NO\n";
  	}
  }






    return 0;
}
/* idea holo .
SumE/SumI > p  hote hobe 
so  sumE / sumI + sumE / sumI + sumE  > p  // E =  expenses // I =  incomes

=>e + e + e + e /  i + i + i + i > p
=>i + i + i + i > p(e + e + e + e )
=> i + i + i + > p*e + p*e + p*e 
=> 0 > p*e - i + p*e - i + p*e - i + p*e - i 
=> 0 > w + w + w // dore nite pari w 

so  W = p*e - i // so weight ace just bellmanFord diya cycle found korbo 

cycle paile Yes na paile No 

*/



