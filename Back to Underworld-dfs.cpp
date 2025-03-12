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

const int mx = 2e4+123;

bool vis[mx];
bool isNode[mx];

vi adj[mx];


int cnt,cnt1;

void dfs (int u,int col1){

	vis[u] = 1;
	

	if(col1 == 1) cnt++;
	cnt1++;

	int temp;

	if(col1 == 1) temp = 2;
	else temp = 1;

	for(auto v:adj[u]){
		if(vis[v]==0){
			dfs(v,temp);
		}
	}

	return;
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

  for(int tc = 1; tc<= T; tc++){

  	for(int i=0; i<mx; i++){
  		adj[i].clear();
  		vis[i] = 0;
  		isNode[i] = 0;

  	} // like memset and it's must be

  	int n;
  	cin>>n;

  	for(int i=1; i<=n; i++){
  		int u,v;
  		cin>>u>>v;

  		adj[u].push_back(v);
  		adj[v].push_back(u);
  		isNode[u] = 1;
  		isNode[v] = 1;
  	}

  	int ans = 0;

  	for(int i=1; i<=2e4; i++){

  		if(isNode[i]==1 && vis[i]==0){
  			cnt = 0 , cnt1 = 0;
  			dfs(i,1);

  			ans += max(cnt , cnt-cnt1); // all Vampire and lykan node
  		}
  	}

  	cout<<"Case " << tc << ": " << ans <<endl;
  }






    return 0;
}


