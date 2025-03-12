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
//https://codeforces.com/problemset/problem/1353/D
const int mx = 2e5+123;

ll a[mx];


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

  	priority_queue< pair<int,int> > pq;

  	pq.push(make_pair( n , -1 ));


  	int cnt = 1;// oparation cnt

  	while(!pq.empty()){

  		int l = pq.top().second * -1; // cmd

  		int len = pq.top().first;
  		pq.pop();

  		int r = l + len-1;

  		int mid; 

  		if( len % 2 == 0){

  			mid = (l+r-1)/2;

  		}else{

  			mid = (l+r)/2;

  		}

  		a[mid] = cnt; 
  		cnt++;

  		int l1, r1, l2, r2;// subsegment

  		l1 = l;
  		r1 = mid-1; 
  		l2 = mid+1;
  		r2 = r;


  		if( l1 <= r1){

  			pq.push(make_pair( r1-l1+1,-l1)); // len and starting indx
  		}

  		if( l2 <= r2){ // valid segment

  			pq.push(make_pair(r2-l2+1,-l2)); // len , starting indx
  		}
  	}

  	for(int i=1; i<=n; i++){

  		cout<<a[i]<<" ";
  	}

  	cout<<endl;
  }





    return 0;
}

/*
com is 

n pojonto oparation kortaci so 
pq er jono log2(n) so 

overall com is : n*log2(n) // tast case count hobe na q te laka ace
*/


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be