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

const int mx = 1e3+12;

vi adj[mx];

int lev[mx];

void bfs (int s){

	memset(lev,-1,sizeof(lev));

	lev[s] = 0;

	queue<int> q;

	q.push(s);


	while(!q.empty()){
		int u = q.front();
		q.pop();

		for(auto v:adj[u]){

			if(lev[v] == -1 ){
				lev[v] = lev[u] + 1;
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


  int n;
  cin>>n;

  for(int i=0; i<n-1; i++){
  	int u,v;
  	cin>>u>>v;

  	adj[u].PB(v);
  	adj[v].PB(u);
  }



  int q;
  cin>>q;

  int ans = 100000, node = 100000; // like inf valu

  while(q--){
  	int u;
  	cin>>u;

  	if(lev[u] <= ans){
  		ans = lev[u];
  		node = min( node, u ); 
  	}

  }

    cout<<node<<endl;





    return 0;
}

/*
6
1 2
1 3
1 4
2 5
2 6
4
5
6
3 
4
//
3
*/


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be