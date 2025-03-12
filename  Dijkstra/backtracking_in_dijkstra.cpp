// In the name of ALLAH
// Inshallah, one day success will be yours

#include<bits/stdc++.h>
using namespace std;

// Typedefs for commonly used types
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef double dl;

// Commonly used macros for simplifying code
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define U upper_bound
#define L lower_bound
#define all(a) (a).begin(),(a).end()
#define mid(l,r) ((r+l)/2)
#define G greater

// Constants
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

// Utility macros
#define mem(a,b) memset(a, b, sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

// Function to set floating point precision (not used here)
void fraction(dl a){
    cout.unsetf(ios::floatfield);
    cout.precision(a);
    cout.setf(ios::fixed,ios::floatfield);
}

// Maximum number of nodes
const int mx = 1e5+123;

// Distance arrays to store shortest path results from two sources
ll dist[3][mx];

// Adjacency list to store the graph
vpii adj[mx];

// Struct to store edge information
struct valu {
    int u, v, w;
};

// Dijkstra's algorithm to find shortest paths from source `s`
// `f1` specifies which distance array to update (dist[0] or dist[1])
void dijkstra(int s, int n, int f1) {
    // Initialize distances from source to all nodes as infinity
    for(int i = 1; i <= n; i++) dist[f1][i] = infLL;

    // Distance from source to itself is 0
    dist[f1][s] = 0;

    // Priority queue to process nodes by shortest distance
    priority_queue<pll, vpll, G <pll>> pq;
    pq.push({0, s});

    // Main loop of Dijkstra's algorithm
    while(!pq.empty()) {
        int u = pq.top().S;   // Current node
        ll curD = pq.top().F;  // Current distance
        pq.pop();

        // Process all adjacent nodes of `u`
        for(auto v: adj[u]) {
            // Relaxation step: check if a shorter path is found
            if(curD + v.S < dist[f1][v.F]) {
                dist[f1][v.F] = curD + v.S; // Update distance
                pq.push({dist[f1][v.F], v.F}); // Push updated distance to queue
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

  int T;  // Number of test cases
  cin >> T;

  // Process each test case
  for(int tc = 1; tc <= T; tc++) {
    // Clear adjacency list for each test case
    for(int i = 1; i <= mx; i++) adj[i].clear();

    // Vector to store all edges (for calculating alternative paths)
    vector<valu> edge;

    int n, m; // Number of nodes and edges
    cin >> n >> m;

    // Read all edges
    for(int i = 1; i <= m; i++) {
        int u, v, w; // Nodes `u`, `v` and weight `w`
        cin >> u >> v >> w;

        adj[u].PB({v, w}); // Add edge to adjacency list
        adj[v].PB({u, w}); // Since it's undirected, add both directions

        edge.PB({u, v, w}); // Add edge to edge list
    }

    // Run Dijkstra from source (node 1) to calculate shortest paths to all nodes
    dijkstra(1, n, 0); // dist[0] now has distances from source

    // Run Dijkstra from destination (node n) to calculate reverse shortest paths
    dijkstra(n, n, 1); // dist[1] now has distances from destination

    // `sorest_pa1` stores the original shortest path from source to destination
    ll sorest_pa1 = dist[0][n];

    // Initialize second shortest path with a large value
    ll sorest_pa2 = infLL;

    // Loop through all edges to find alternative paths
    for(auto e : edge) {
        int u = e.u; // Edge start node
        int v = e.v; // Edge end node

        // Calculate possible paths by combining distances
        ll curD = min(dist[0][u] + dist[1][v], dist[0][v] + dist[1][u]);

        // Check if using this edge can give a valid second shortest path
        if(curD + e.w > sorest_pa1) {
            sorest_pa2 = min(sorest_pa2, curD + e.w); // Update second shortest if it's better
        }

        // Special case to avoid re-using shortest path directly
        if(curD + e.w == sorest_pa1) {
            sorest_pa2 = min(sorest_pa2, curD + (e.w * 3)); // Trick to avoid exact shortest path
        }
    }

    // Output the result for the current test case
    cout << "Case " << tc << ": ";
    cout << sorest_pa2 << endl;
  }

  return 0;
}

// Steps:
// 1. Understand the problem
// 2. Plan solution
// 3. Divide and conquer - break down the problem step-by-step
// 4. Practice to get better!
