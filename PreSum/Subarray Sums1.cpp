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

//https://cses.fi/problemset/task/1660/
const int mx = 2e5+123;

ll a[mx];

ll preSum[mx];


int32_t main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  int n , x;
  cin>>n>>x;

  for (int i=1; i<=n; i++ ){
    cin>>a[i];
  }

  for (int i=1; i<=n; i++ ){

    preSum[i] = preSum[i-1] + a[i];
  }

  ll ans = 0;

  map<ll,int> cnt;

  cnt[0] = 1 ; // 1 base indx thai 0 k age thake e cnt kore rakci

  for (int i=1; i<=n; i++ ){ 

    ll sumL = preSum[i] - x ; // preSum[r] - preSum[l-1] = X // Question required
                              // ==> preSum[r] - X = preSum[l-1]

    ans += cnt[sumL];

    cnt[preSum[i]]++;  // maping like cnt[11] = 3  // log2(n)
  }

  cout<< ans<<endl;

  // total time complexity is O(n*log2(n)) // N = 2e5

/*
  int cnt = 0;


  for (int i=1; i<=n; i++ ){ // O(n^2) 

  	for (int j=i; j<=n; j++ ){ // 2 

  		int len = j - i+1; // 1 - 1 + 1 = 1

  		if ( len % 2 != 0){ // 

  			if ( x == preSum[j] - preSum[i-1] ){

  				cnt++;
  			}
  		}
  	}
  }



  cout<< cnt << endl;

*/






    return 0;
}
