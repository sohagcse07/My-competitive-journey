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

  	int n , k;

  	cin>> n >>k;

  	bool f1 = n%2;
  	bool f2 = k%2;


  	if( n < k || (f1 == 1 && f2 == 0)) cout<<"NO\n";


  	else if( (f1 == 1 && f2 == 1) || ( f1 == 0 && f2 == 0)){

  		cout<<"yes\n";

  		for(int i=1; i<=k-1; i++){

  			cout<< 1 << " ";

  			n--; 
  		}

  		cout<<n<<endl;
  	}

  	else if (f1 == 0 && f2 == 1){

  		int x = n / 2;

  		if( x >= k){

  			cout<<"yes\n";

  			for(int i=1; i<=k-1; i++){

  				cout << 2 << " ";

  				n-=2;
  			}

  			cout<< n<<endl;
  		}else{

  			cout<<"No\n";
  		}
  	}




/*
  	if( n < k ||( n % 2 == 1 && k % 2 == 0)) cout<<"NO\n";

  	else if ( n % 2 == 0 && k % 2 == 0){

  		int x = k-1; int y = n - x;

  		cout<<"yes\n";

  		cout << x <<" " << y<<endl;;
  	}

  	else if ( n % 2 == 1 && k % 2 == 1){

  		int x = k-1 ; 

  		cout<<"yes\n";

  		for(int i=1; i<=x; i++){
  			cout<< 1 << " ";
  		} 
  		cout << n - x<<endl;
  	}

  	else if ( n % 2 == 0 && k % 2 == 1){

  		if( n /2 >= k){
  			int x = k-1; // 2;
  			int y = n - (x + x); // 8;

  			cout<<"yes\n";
  			for(int i=1; i<=x; i++){
  				cout<<2<<" ";
  			}

  			cout<< y <<endl;

  		}else{

  			cout<<"no\n";
  		}
  	}

  	*/
  }






    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be