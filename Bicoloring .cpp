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

const int mx = 212;

vi adj[mx];

int col[mx];

bool isBipartite ( int s ){

	mem(col,-1); 

	col[s] = 1; // 1 colur korteci 1st er node take

	queue<int> q;
	q.push(s);

	while(!q.empty()){

		int u = q.front();
		q.pop();

		for(auto v: adj[u] ){

			if(col[v]==-1){
				if(col[u]==1) col[v] = 2; // colur ta 1 thkle 2 kore dibo
				else col[v] = 1; // -1 thakle 1 kore dibo
				q.push(v);
			}
			else if( col[v] == col[u]) return 0; // colur 2 ta ek hole false hobe
		}
	}

	return 1;
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

  while(cin>>n){
  	if( n == 0) break;

  	for(int i=0; i<n; i++){
  		adj[i].clear(); // like memeset must be
  	}

  	int m;
  	cin>>m;

  	for(int i=0; i<m; i++){
  		int u,v;
  		cin>>u>>v;

  		adj[u].push_back(v);
  		adj[v].push_back(u);
  	}

  	if(isBipartite(0)){
  		cout<<"BICOLORABLE.\n";
  	}else{
  		cout<<"NOT BICOLORABLE.\n";
  	}
  }






    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be