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


  int n;
  cin>>n;


  if ( n > 0 ){

  	cout << n << endl;
  }else{

  	string s = to_string ( n );

  	int digit1 = stoi( s.substr( 0 , s.size() - 1 ));

  	int digit2 = stoi ( s.substr( 0 , s.size()-2  + s.back()));

  	cout << max ( n , max ( digit1 , digit2 )) << endl;
  }


/*

  bool neg = true;

  if ( n > 0 ) cout << n << endl;

  else {

  	int last_digit = n / 10;

  	int last_digit2 = n / 100 * 10 + ( n % 10 );

  	cout << max ( n , max ( last_digit , last_digit2)) << endl;
  }

*/
  /*

  if ( n < 0 ){

  	n*=-1;

  	neg = false;

  	int a =   n % 10;

  	int b = n % 100 ;

  	int c = b / 10;

  	if ( a < c ){

  		int x  = n /= 10 ;
  		cout<<  x << endl; 

  	}else{

  		int x=n /= 100;

  		cout << x << c << endl;
  	}

  	if ( n > 0 ){

  		cout << n << endl;
  	}
  }

*/




    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be