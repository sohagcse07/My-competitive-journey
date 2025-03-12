// In the name of ALLAH
// Inshallah, one day success will be yours

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
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
#define all(a) (a).begin(), (a).end()
#define mid(l, r) ((r + l) / 2)

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define sqr(a) ((a) * (a))

// O ( N + M )
const int mx = 1e5 + 12;
vi adj[mx];       // Adjacency list for the graph
int color[mx];    // Color array to store color of nodes for bipartiteness check

// Function to check if the graph is bipartite using BFS
bool bfs(int s) {
    mem(color, -1); // Initialize all colors to -1 (unvisited)
    color[s] = 1;   // Start coloring the source node
    queue<int> q;
    q.push(s);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto &v : adj[u]) {
            if (color[v] == -1) { // If the node is uncolored
                color[v] = 3 - color[u]; // Assign opposite color to adjacent node
                //  v = 3 - 1 = 2 // v = 2 - 1 = 1
                // 1 and 2 color kortaci 
                q.push(v);
            } else if (color[v] == color[u]) { // Adjacent nodes with the same color
                return false; // Not a bipartite graph
            }
        }
    }
    return true;
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

    // Input graph edges
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].PB(v);
        adj[v].PB(u);
    }

    // Check bipartiteness across all nodes (to handle disconnected components)
    bool isBipartite = true;
    for (int i = 1; i <= n; i++) {
        if (color[i] == -1) { // For unvisited nodes
            if (!bfs(i)) {    // Run BFS and check bipartiteness
                isBipartite = false;
                break;
            }
        }
    }

    // Output result
    if (isBipartite) {
        cout << "YES, the graph is bipartite" << endl;
    } else {
        cout << "NO, the graph is not bipartite" << endl;
    }

    return 0;
}

/*
4 4
1 2
1 3
2 4
3 4
//
YES, the graph is bipartite
*/

// Steps to solve the problem:
// 1. Understand the problem
// 2. Plan a solution
// 3. Divide and conquer - Solve part by part
// 4. Practice and improve
