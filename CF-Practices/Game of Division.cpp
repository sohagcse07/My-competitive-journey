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


void solve(){

  int n , k;
  cin>>n>>k;

  vi a(n);

  for (int i=0; i<n; i++ ) cin>>a[i];


  if ( n == 1 ){

    cout<< "yes\n";
    cout<< n <<endl;
    return;
  }


  for (int i=0; i<n; i++ ){

    int cnt = 0;

    for (int j=0; j<n; j++ ){

      if ( i == j ) continue;


      if ( abs(a[i] - a[j]) % k != 0  ){

        cnt++;
      }
    }


    if ( cnt == n-1 ){

      cout<< "yes\n";
      cout << i+1 << endl;
      return;
    }
  }


  cout << "no\n";

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

    solve();
  }






    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be