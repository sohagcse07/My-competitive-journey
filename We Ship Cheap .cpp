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

map<string, vector<string>> adj;
map<string,int> lev;
map<string,string> per;

void bfs( string s){

	lev.clear();//memset

	lev[s] = 1; // inisa e 0 thake map er all valu

	queue<string> q;
	q.push(s);

	while(!q.empty()){

		string u = q.front();
		q.pop();

		for(auto v:adj[u]){

			if(lev[v]==0){ // map er all valu 0 thake so memset use kori nai

				lev[v] = lev[u] + 1;

				per[v] = u; // perants and node // per and node ta treak rakteci

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

  bool yes = 0;

  while(cin>>n){

  	//if(n==0) break;

  	if(yes) cout<<endl;

  	yes = 1;

  	adj.clear();
  	per.clear();

  	for(int i=0; i<n; i++){
  		string u,v;
  		cin>>u>>v;

  		adj[u].PB(v);
  		adj[v].PB(u);
  	}

  	string s,t; // sourece and tarminent point
  	cin>>s>>t;

  	bfs(s);


  	if(lev[t]==0){
  		cout<<"No route\n";
  		continue;
  	}

  	vector<pair<string,string>> ans;

  	while(!per[t].empty()){

  		ans.PB({per[t],t});
  		t = per[t];
  	}

  	reverse(all(ans)); // ans gola olta vabe asce so reve koredici

  	for(auto u:ans){
  		cout<<u.F<<" " << u.S <<endl;
  	}
  }






    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be