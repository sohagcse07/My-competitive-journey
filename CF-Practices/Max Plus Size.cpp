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

    vi a(n+1);

    int arr_mx_e = 0;

    for(int i=1; i<=n; i++ ){

      cin>>a[i];

      arr_mx_e = max ( arr_mx_e , a[i] ); // 5
    }

    int cnt = ( n+1 ) / 2; // 0 base indx // 5

    bool odd_pos = false;

    for (int i=1; i<=n; i++ ){

      if ( a[i] == arr_mx_e && ( i % 2 != 0 )){ // a[5] == 5

        odd_pos = true;

        break;
      }
    }


    if( n%2 == 0 || (odd_pos)){

      cout<< arr_mx_e + cnt <<endl;
    }else{

      cout<< arr_mx_e + cnt -1  << endl;
    }


  }

/*
  while (t--){

  	int n;
  	cin>>n;

  	vi v(n);

  	for (int i=1; i<=n; i++ ) cin>>v[i];



  	if ( n%2==0){

  		int mx = ;

  		int cnt = 0;

  		sort(all(v));

  		for(int i=n; i<=1; i-=2 ){

  			mx = max ( v[i] , mx );
  			cnt++;
  		}

  		cout<< mx+cnt<<endl;

  	}else{

  		int mx = INT_MIN;

  		int cnt = 0;

  		for(int i=1; i<=n; i+=2 ){

  			mx = max ( v[i] , mx );

  			cnt++;
  		}

  		
  		cout<< mx + cnt <<endl;
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