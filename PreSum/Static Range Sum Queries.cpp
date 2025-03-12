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

//https://cses.fi/problemset/task/1646/
const int mx = 2e5+123;
 
int a[mx];
 
ll preSum[mx]; // 0 3 5 9 14 0
              //  0 1 2 3 4 5 
 
int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
 
/*
  int n,q;
  cin>>n>>q;
 
  for(int i=1; i<=n; i++) cin>>a[i];
 
 
  while(q--){
    int l,r;
 
    cin>>l>>r;
 
    ll sum = 0;
 
    for(int i=l; i<=r; i++){
      sum+=a[i];
    }
 
    cout<<sum<<endl;
  }
 
  ai code are time complexity is O(n*n) or O(n*q) same khota
*/
 
  // prefix sum use korar por code hobe
 
 
  int n,q;
 
  cin>>n>>q;
 
  for(int i=1; i<=n; i++) cin>>a[i];
    // 3 2 4 5
    // 1 2 3 4
 
 
  for(int i=1; i<=n; i++){ // 4
 
    preSum[i] = preSum[i-1] + a[i]; // presum[4] = presum[4-1] + a[4] = 5 
    // total = 14 
  }
 
 
  while(q--){
    int l,r;
    cin>>l>>r;
 
    cout<<(preSum[r] - preSum[l-1])<<endl; // p(1,r) - p(1,l-1);
  }
 
  // time complexity is O(n);
 
 
  // this call 
  // 1. pre calculation
  // 2. offline query processing
  // 3. partial sum
  // 4. prefix sum
 
 
 
    return 0;
}
 
/*
in
8 4
3 2 4 5 1 1 5 3
2 4
5 6
1 8
3 3
//
11
2
24
4
*/
 
 
