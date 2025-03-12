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
const int mx = 1e5+123;
ll dist[mx];
vii adj[mx];
int par[mx];

void dijkstra ( int s, int n )
{
    for ( int i = 1; i <= n; i++ ) dist[i] = infLL;
    priority_queue< pll, vll, greater<pll>> pq;

    dist[s] = 0;
    pq.push ( { 0, s } );

    while ( !pq.empty() ) {
        int u = pq.top().S;
        ll curD = pq.top().F;
        pq.pop();

        if ( dist[u] < curD ) continue;

        for ( auto v : adj[u] ) {
            if ( curD + v.S < dist[v.F] ) {
                dist[v.F] = curD + v.S;
                par[v.F] = u;
                pq.push( { dist[v.F], v.F } );
            }
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


  int n, m;
    cin >> n >> m;
    for ( int i = 1; i <= m; i++ ) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].PB ( {v, w} );
        adj[v].PB ( { u, w } );
    }

    dijkstra(1, n);

    if ( dist[n] == infLL ) return cout << "-1\n", 0;

    int u = n;
    vi ans = {n};
    while ( par[u] != 0 ) {
        ans.PB ( par[u] );
        u = par[u];
    }

    reverse ( all ( ans ) );

    for ( auto u : ans ) cout << u << " ";
    cout << endl;







    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be