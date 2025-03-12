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

  	ll a[n+124];

  	for (int i=1; i<=n; i++ ) cin>>a[i];

  	if ( n%2 ){

  		ll ans = 1e18;

  		//a[] = { 1 , 5 , 8 , 10 , 13 }
  		// 		  1 , 2 , 3 , 4  , 5
  		for(int i=1; i<=n; i+=1 ){ // i = 1

  			
  			if ( i%2 ){ // T

				ll lagbena = i ,  mx1 = 1; /// L = 1 , mx = 1

				//a[] = { 1 , 5 , 8 , 10 , 13 }
  				// 		  1 , 2 , 3 , 4  , 5

  				for(int j=1; j<=n; j+=2){ // j = 5

  					if ( lagbena != j ){ // T

  						mx1 = max ( mx1 , (a[j+1] - a[j]) ); // a[5] - a[4] = 8 - 5 = 3 , 10 - 8 = 2 , 13 - 10 = 3 
  						
  					}

  					if ( lagbena == j){ // T 
  						j--; // j = 1 - 1 = 0 
  					}
  				}
  				ans = min( mx1 , ans );
  			}

  			
  		}

  		cout<<ans<<endl;
  	}else{

  		ll ans = 1;

  		for (int i=1; i<=n; i+=2 ){

  			ans = max ( ans ,  (a[i+1] - a[i]));
  		}

  		cout<<ans<<endl;
  	}
  }






    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be