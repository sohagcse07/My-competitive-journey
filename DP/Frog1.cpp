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

//overlaping sub problem
const int mx = 1e5+123;

int h[mx],n;
int dp[mx];


int solve (int i){

	if( i == n) return 0;

	if(dp[i] != -1) return dp[i];

	int ret1 = 2e9 , ret2 = 2e9;

	if( i+1 <= n ) ret1 = abs( h[i] - h[i+1] ) + solve ( i+1 );

	if( i+2 <= n) ret2 = abs( h[i] - h[i+2] ) + solve ( i+2 );


	dp[i] =  min ( ret1,ret2); // over laping gola dp te save korteci

	return dp[i];
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  cin>>n;

  for(int i=1; i<=n; i++){
  	cin>>h[i];
  }

  mem(dp,-1);

  cout<<solve(1)<<endl;







    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be