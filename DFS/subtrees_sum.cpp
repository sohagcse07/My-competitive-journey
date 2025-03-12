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

 
const int mx = 1e5+123;

bool vis[mx];

vector<int> adj[mx];

int subtree_sum[mx];

void dfs ( int u  , int par = 0){


	vis[u] = 1;


	subtree_sum[u] += u; // u node e acci oi node ta o to add hobe thai eta korci 


	for(auto v:adj[u] ){ // v is child node , 

		if (!vis[v] && v != par ){

			dfs(v);
			subtree_sum[u] += subtree_sum[v]; // u node e ami all child er sum gola rakci 
		}
	}
}

void reset (int n ){

	for( int i=1; i<=n; i++ ){

		vis[i] = 0;

		subtree_sum[i] = 0;
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


  int n;
  cin>>n;

  for(int i=1; i<=n-1; i++ ){

  	int u , v;
  	cin>>u>>v;

  	adj[u].push_back(v);
  	adj[v].push_back(u);
  }


  int q;
  cin>>q;

  while(q--){

  	int n;
  	cin>>n;

  	reset(n);
  	dfs(n);
  	cout<<subtree_sum[n] <<endl;

  }
/*
5
1 2
1 3
2 4
2 5
3
1
2
3
//
15
3
6
*/
// time complexity is ( q*n) q = 1e5 * n = 1e5 == 10^10 1s e run korbe na







    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be