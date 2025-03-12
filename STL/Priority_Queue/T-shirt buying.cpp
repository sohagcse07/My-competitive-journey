//In the name of ALLAH

// Insallah one day success will be your

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi; // vector<vector<int>>
typedef vector<vl> vvl; // vector<vector<long long>>
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll; // pair<long long,long long>
typedef vector<pii> vii;///vector<pair<int,int>> vii
typedef vector<pll> vll; // vetor< pair< long long , long log>>
typedef double dl;
 
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define U upper_bound
#define L lower_bound
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
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

const int mx = 2e5+123;

int a[mx]; // fornt color
int b[mx]; // back color
int p[mx]; // price

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
 

  int n;
  cin>>n;

  for(int i=1; i<=n; i++) cin>>p[i]; // price
  for(int i=1; i<=n; i++) cin>>a[i]; // fornt color
  for(int i=1; i<=n; i++) cin>>b[i]; // back color


 priority_queue < int  , vector<int> , greater<int>> q[5][5]; //sort queue

// q[1][2] = { p1,p2,p3..}

// 1 front c , and 2 back c

  for(int i=1; i<=n; i++){
    q[a[i]][b[i]].push( p[i] );// q[1][2] = { p1,p2,p3..}
  }


  int m;
  cin>>m;

  while( m-- ){

    int c;
    cin>>c;

    ll ans = INT_MAX;

    int front , back;

    for(int i=1; i<=3; i++){

        if( !q[c][i].empty() && q[c][i].top()< ans){
            ans = q[c][i].top();

            front = c , back = i;
        }
    }

    for( int i=1; i<=3; i++){

        if(!q[i][c].empty() && q[i][c].top() < ans ){
            ans = q[i][c].top();
            front = i , back = c;
        }
    }

    // front and back color combination

    if(ans == INT_MAX) ans = -1;
    else{
        q[front][back].pop();
    }

    cout<<ans<<" ";
  }

  cout<<endl;






  return 0;
}