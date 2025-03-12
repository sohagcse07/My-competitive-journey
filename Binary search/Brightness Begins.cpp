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

 
// complexity kom er jono use korci 
long long funcall ( long long  mid ){

	long long x = sqrt(mid)+2; // 10 + 2 = 12

	while( x*x > mid ){ // 10 * 10 = 20 > mid  

		x--; // 10
	}

	return x; 
}


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

  while (t-- ){

  	long long k ;

  	cin>>k;

  	unsigned long long l = 0 , r = 1e19;

  	unsigned long long ans ;

  	while ( l<=r ){

  		unsigned long long mid = mid(l,r);

  		unsigned long long root = funcall(mid);


  		if ( mid - root >= k ){

  			ans = mid;

  			r = mid-1;
  		}else{

  			l = mid+1;
  		}
  	}

  	cout<< ans << endl;
  }


// complexity is k = 1e18 t = 10^4

// bs --> log2(n) * k 

// log2(10^18) * 10^4 = 60 ta oparation hoitace 



    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be