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

//https://cses.fi/problemset/task/1650/

const int mx = 2e5+123;
 
int a[mx];
 
int preSum[mx];
 
 
int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
 
 
  int n,q;
  cin>>n>>q;
 
  for(int i=1; i<=n; i++) cin>>a[i];
 
  for(int i=1; i<=n; i++){

    preSum[i] = preSum[i-1] ^ a[i];

  }
 
 
  while(q--){
 
    int l,r;
 
    cin>>l>>r;
 
    int ans = preSum[r] ^ preSum[l-1];
 
    cout<<ans<<endl;
  }
 
 
 
 
 
    return 0;
}

