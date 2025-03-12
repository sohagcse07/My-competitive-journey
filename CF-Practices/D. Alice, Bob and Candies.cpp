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

const int mx = 1e3+123;

int a[mx];


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

  	for(int i = 1; i<=n; i++) cin>>a[i];


  	int alVal = 0 , boVal = 0;

  	int alPrev = 0 , boPrev = 0;

  	bool alTrun = 0 , boTrun = 0;

  	int game = 0;

  	
  	int l = 1 , r = n;

  	alTrun = 1;

  	while( l <= r){

  		if ( alTrun == 1){

  			alPrev = 0;

  			while ( l <= r && (alPrev <= boPrev)){
				
				alPrev += a[l];

  				alVal += a[l];
  				l++;
  			}

  			alTrun = 0;
  			boTrun = 1; // switch trun 

  		}

  		else{

  			boPrev = 0;

  			while ( l <= r && (boPrev <= alPrev)){

  				boPrev += a[r];
  				boVal += a[r];
  				r--;
  			}

  			boTrun = 0; 
  			alTrun = 1;
  			// swich trun 
  		}

  		game++;
  	}


  	cout << game << " " << alVal << " " << boVal << endl;
  }






    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be