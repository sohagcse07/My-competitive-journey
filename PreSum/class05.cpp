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


const int mx = 3e4+123;

ll PreSum[mx];

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  int T;

  cin>>T;

  for (int tc=1; tc<=T; tc++ ){

  	string s;
  	cin>>s;
  	string p;
  	cin>>p;


  	ll ans = 0;
  	int n = s.size();
  	int m = p.size();

  	for (int ch=0; ch<10; ch++ ){

  		char c = 'a' + ch;
  	

	  	for (int i=0; i<n; i++ ){ // p[1] = p[0] + true / false

	  		PreSum[i+1] = PreSum[i] + ( s[i] == c );
	  	}

	  	for (int i=0; i<m; i++ ){

	  		if( c == p[i] ){

	  			int l = i+1; // 0 base indx holo string so i+1 
	  			int cnt = m - i - 1; // 0 base indx // 5 - (i+1) = 5 - i - 1
	  			int r = n - cnt; // total indx  - last kota ta char baki ace 

	  			ans += (PreSum[r] - PreSum[l-1]);
	  		}


	  	}
	}


	cout << "Case " << tc << ": " << ans << endl;
  }


 // time comp is :  T * 10 * n = 100 * 10 * 30000 = 3*10^7 total com




    return 0;
}

/*
question
1.

You will be given a string S of length N and another string P of length M. let's define a function,F(X,Y).

It takes two string X and Y having same length and returns an integer, their match_score. Then match_score is total number of positions where the characters of both string match.Example: F("aia","iai")= 0 , F("aia","aaa")=2

print the summation of F(X,P) where X is a substring having length M of string S. so,there will be total N-M+1 different X.

input format 

input starts with an integer T , denoting the number of test case the first line contains and String S and the second line contains another string P.

constrains

t = 100
1<=M <= N <= 30000

The Strings will contain only the first 10 lowercase English letters.

output format

for each test case. print a single line in this format Case T:D here T denotes the case number and D denotes the answer.

input 0

2
abagig
bgi
haffidafidfid
hafd

output 0 

Case 1: 3
Case 2: 10

*/