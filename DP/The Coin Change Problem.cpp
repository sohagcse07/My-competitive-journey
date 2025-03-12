/** In the Name of ALLAH */


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
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

int dx[] = {0, 0, +1, -1, +1, +1, -1, -1};
int dy[] = {+1, -1, 0, 0, +1, -1, +1, -1};

inline ll gcd ( ll a, ll b ) { return __gcd (a, b); }
inline ll lcm ( ll a, ll b ) { return ( a * ( b / gcd (a, b) ) ); }



#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

void intcode(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
}
//https://www.hackerrank.com/challenges/coin-change/problem
//https://leetcode.com/problems/coin-change-ii/description/
//
const int mx = 260;

int coin[60], m;
ll dp[60][mx];

ll solve ( int i, int n )
{
    if ( i == m || n == 0 ) return ( n == 0 );
    if ( dp[i][n] != -1 ) return dp[i][n];

    ll ret = 0;

    for ( int j = 0; j <= n; j++ ) {
        if ( n - ( j * coin[i] ) >= 0 ) ret += solve ( i+1, n - ( j * coin[i] ) );
        else break;
    }

    return dp[i][n] = ret;
}


int main()
{
    optimize();
    intcode();

    int n;
    cin >> n >> m;
    for ( int i = 0; i < m; i++ ) cin >> coin[i];

    mem ( dp, -1 );
    cout << solve ( 0, n ) << endl;
    
    return 0;
}