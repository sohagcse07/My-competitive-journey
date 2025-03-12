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

  while ( t-- ){

  	int n;
    cin>>n;
	  int ans = 0 , f1 = 1;
  	while ( n-- ){

  		int x;
  		cin>>x;

  		ans += x*f1; // 

  		f1 *= -1; // trun into negative to positive
  		
  	}
	cout<<ans<<endl;



/*
  	vi v(n);

  	for ( int i=1; i<=n; i++ ){
  		cin>> v[i];
  	}



  	int ans = 0;

  	if ( n % 2 == 0 ){

  		for ( int i=1; i<=n; i+=2){

  			ans += v[i] - v[i+1];
  		}
  	}else{

  		if ( n == 1){
  			for ( int i=1; i<=n; i++ ){
  				ans+=v[i];
  			}
  		}else{

  			for ( int i=1; i<=n-1; i+=2 ){
  				ans+= v[i] - v[i+1];

  				
  			}
			if ( n % 2 == 1) ans+=v[n];
  		}

  		
  	}

 

  	cout<< ans << endl;

*/
  }

/*

n = 4 (so we have 4 numbers to process)
Initial values: ans = 0, f1 = 1 (because we start by adding the first number).
Step-by-step Process:
First number (1):

x = 1
ans += x * f1 becomes ans += 1 * 1 = 0 + 1 = 1.
Now, f1 *= -1 makes f1 = -1 for the next iteration.
Second number (2):

x = 2
ans += x * f1 becomes ans += 2 * -1 = 1 - 2 = -1.
Now, f1 *= -1 makes f1 = 1 for the next iteration.
Third number (3):

x = 3
ans += x * f1 becomes ans += 3 * 1 = -1 + 3 = 2.
Now, f1 *= -1 makes f1 = -1 for the next iteration.
Fourth number (17):

x = 17
ans += x * f1 becomes ans += 17 * -1 = 2 - 17 = -15.
No further iterations as this was the last number.

*/




    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be