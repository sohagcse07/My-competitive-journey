//In the name of ALLAH

// Insallah one day success will be your

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi; // vector<vector<int>>
typedef vector<vl> vvl; // vector<vector<long long>>
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll; // pair<long long,long long>
typedef vector<pii> vii;///vector<pair<int,int>> vii
typedef vector<pll> vll; // vetor< pair< long long , long log>>
typedef double dl;
 
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define U upper_bound
#define L lower_bound
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
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

//https://www.spoj.com/problems/REDARR2/

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

  	int n;
  	cin>>n;

  	priority_queue <ll,vl,greater<ll>>q;

  	for(int i=1; i<=n; i++){
  		ll a;
  		cin>>a;

  		q.push(a);
  	}

  	ll ans = 0;

  	while( q.size() > 1){

  		ll a = q.top();
  		q.pop();

  		ll b =  q.top();
  		q.pop();

  		ll sum = (a + b);
  		q.push( sum);

  		ans +=sum;
  	}

  	cout<<ans<<endl;
  }

/*
2
4
1 6 3 20
3
2 2 2
//
44
10
*/




    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be