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

	int u , v, w;
};

//https://cses.fi/problemset/task/1197/

const int mx = 2e4+123;

ll dist[mx];

vector<info>e;

int par[mx]; // parent arr;

vi BellmanFord ( int s , int n , int m){

	vi path; // ret path or size 0 

	for ( int i=1; i<=n; i++ ) dist[i] = infLL;

	dist[s] = 0;

	int x = -1; // last node ditect korar jono 

	for (int i=1; i<=n; i++ ){

		x = -1;

		for (int j=0; j<m; j++ ){

			int u = e[j].u;
			int v = e[j].v;
			int w = e[j].w;

			//if ( dist[u] < infLL); // eta hobe na 

			if ( dist[u] + w  < dist[v] ){

				dist[v] = dist[u] + w;

				par[v] = u;

				x = v;
			}
		}
	}

	if ( x == -1 ) return path; // cycle nai so ret path 

	for ( int i=1; i<=n; i++ ){ // last node thake reverse kore cycle e jaiteci 

		x = par[x]; // par[] = 5 -> 4 -> 2 -> 1 -> 3 -> 2 // node / N = 5 
	}

	//int sz = path.size(); // fast tast case run kora nor jono
	

	int y = x ; // 2 

	while ( y != x || path.size()  == 0  ){ //1st ( 2 != 2 F || sz == 0 T  ) run // then ( 1 != 2 T || F  )
		path.push_back( y ); // path = 2 , 1 , 3 
		y = par[y]; //  y = 1 , y = 3  // per[2] = 1 , par[1] = 3 .. so..
	}

	path.push_back( x ); // last element of cycle ( 2 )

	reverse ( all ( path )); 

	return path;
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

  for ( int i=1; i<=m; i++ ){
  	int u ,v , w;
  	cin>>u>>v>>w;

  	e.push_back({ u , v , w });
  }


  vi ans = BellmanFord ( 1 , n , m );


  if ( ans.size() == 0 ){
  	cout<<"NO\n";
  }else{

  	cout<<"YES\n";

  	for ( auto &u:ans ){
  		cout<< u << " ";
  	}
  	cout<<endl;
  }






    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be
