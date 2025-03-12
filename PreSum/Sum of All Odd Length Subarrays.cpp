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

//https://leetcode.com/problems/sum-of-all-odd-length-subarrays/description/
const int mx = 123;
// 1<= arr.lenght <= 100
// 1 <=arr[i] <= 1000

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

  int n;
  cin>>n;

  for (int i=1; i<=n; i++ ){

  	cin>>a[i];

  }


  for (int i=1; i<=n; i++ ){

  	preSum[i] = preSum[i-1] + a[i]; // 
  }

  int ans = 0;

  for (int i=1; i<=n; i++ ){ // (1,1) ,( 1,2) , (1,2,3) (1,2,3,4) so..on

  	for (int j=i; j<=n; j++ ){

  		int len = j - i+1; // len = Right - left+1;

  		if ( len%2 !=0 ){

  			ans += ( preSum[j] - preSum[i-1] ); // p[r] - p[l-1]
  		}
  	}
  }

	cout<< ans << endl;

//5
//1 4 2 5 3

// out is : 58

    return 0;
}


