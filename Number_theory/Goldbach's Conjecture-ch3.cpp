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

//https://vjudge.net/problem/UVA-543

const int mx = 1e6+12;

bitset <mx> isPrime;

vector<int> primes;

void PrimesGen(int n){

	for(int i=3; i<=n; i+=2) isPrime[i] = 1;

	int sq = sqrt(n);

	for(int i=3; i<=sq; i+=2){
		if(isPrime[i]){
			for(int j=i*i; j<=n; j+=i){
				isPrime[j] = 0;
			}
		}
	}

	for(int i=3; i<=n; i+=2){
		if(isPrime[i]){
			primes.push_back(i);
		}
	}
}


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int lim = 1e6;

  PrimesGen(lim);

  int n;

  while( cin>>n){
  	
  	if(n==0) break;

  	bool f1 = false;

  	for(auto u:primes){

  		if(u>n) break;

  		int a = u;

  		int b = n - a;

  		if(isPrime[b]){
  			cout<< n <<" = " << a << " + " <<b<<endl;
  			f1 = true;
  			break;
  		}
  	}

  	if(!f1){
  		cout<<"‘Goldbach's conjecture is wrong.’"<<endl;
  	}

  }





    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be