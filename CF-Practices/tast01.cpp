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
void intcode(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
}

int func(int a,int b){

	if ( a > b) return 1;

	if( a == b) return 0;

	if( b > a) return -1;

}


int32_t main() {
	intcode();
  
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin>>t;

  while(t--){

	  int a1,a2,b1,b2;
	  cin>>a1>>a2>>b1>>b2;

	  int ans = 0;

	  if(func(a1,b1) + func(a2,b2) > 0) ans+=1; // 3 , 2 ,  + 8 , 6

	  if(func(a1,b2) + func(a2,b1) > 0) ans+= 1; // 3 , 6  F , 8 , 2 T 

	  if(func(a2,b1) + func(a1,b2) > 0) ans+=1; // 8 , 2 T , 3,6 F

	  if(func(a2,b2) + func(a1,b1) > 0) ans+=1;




	  cout<<ans<<endl;

  }







    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be