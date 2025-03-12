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

/*
presume bar kore mode kore presume er arr ta te e rakbo then kon mode valu ta koto bar acce ta 
ans e + korbo 
*/
//https://lightoj.com/problem/be-efficient
const int mx = 1e5+123;

int a[mx];

ll sum[mx];

ll cnt[mx];


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

  for(int tc=1; tc<=t; tc++){

  	mem(cnt,0);

  	int n,m;
  	cin>>n>>m;

  	for(int i=1; i<=n; i++ ) cin>>a[i];

  	for(int i=1; i<=n; i++) sum[i] = sum[i-1] + a[i];


  	for(int i=1; i<=n; i++) sum[i] %=m; // (a+b) % m = ((a%m) + (b%m))%m


  	//map<int,int>cnt;

  	cnt[0] = 1;

  	ll ans = 0;

 	for(int i=1; i<=n; i++){
 		ans+=cnt[sum[i]];
 		cnt[sum[i]]++;
 	}

 	cout<<"Case " <<tc<<": "<<ans<<endl;
  }


// map diya o kora jay and cnt arr diya o kore jay


/*

complexity is :

T*nlog2(n) // T = 10 , N = 1e5

10*1e5*16 = 1.6*10^7 1s e run korbe 

*/


    return 0;
}
