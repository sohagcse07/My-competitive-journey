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

// normal bfs er time com is: O(v+e) v = node e = edges

// for this problem time com is: O (T*(n+m))  it's 2e6 er kom

//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/

const int mx = 1e5+123;

bool vis[mx];

vi adj[mx];

int lev[mx];


void bfs (int s){ // source

	mem(lev,-1); // all node are -1 kore dici 
	lev[s] = 0;

	queue<int> q; //FIFO

	q.push(s);


	while( !q.empty()){

		int u = q.front(); 
		q.pop();

		for(auto v:adj[u]){

			if(lev[v] == -1){
				
				lev[v] = lev[u] + 1; // leve 1 kore baraita
				q.push(v);
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

  while(t--){

  	for(int i=0; i<mx; i++){
  		adj[i].clear(); // it's must be
  	}

  	int n,m;
  	cin>>n>>m;

  	for(int i=0; i<m; i++){
  		int u,v;
  		cin>>u>>v;

  		adj[u].PB(v);
  		adj[v].PB(u);
  	}

  	bfs(1);

  	cout<<lev[n]<<endl;
  }






    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be