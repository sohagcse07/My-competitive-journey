#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define PB push_back
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define mem(a, b) memset(a, b, sizeof(a))

const int mx = 1e5 + 123;

vi adj[mx];       // Adjacency list for the graph
int lev[mx];      // Level (distance) array
int parent[mx];   // Array to store parent of each node for path reconstruction

void bfs(int s, int target) {
    mem(lev, -1);       // Initialize levels to -1 (unvisited)
    mem(parent, -1);    // Initialize parents to -1 (no parent)

    lev[s] = 0;
    queue<int> q;
    q.push(s);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto v : adj[u]) {
            if (lev[v] == -1) { // Unvisited node
                lev[v] = lev[u] + 1;    // Set the level of the neighbor
                parent[v] = u;          // Set parent of v to u
                q.push(v);
                
                if (v == target) {      // Stop if we reached the target
                    return;
                }
            }
        }
    }
}

void printPath(int target) {
    if (lev[target] == -1) {
        cout << "No path found" << endl;
        return;
    }

    vector<int> path;
    for (int v = target; v != -1; v = parent[v]) {
        path.PB(v);
    }
    reverse(all(path));

    cout << "Path: ";
    for (int node : path) {
        cout << node << " ";
    }
    cout << endl;
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
    cin >> t;

    while (t--) {
        for (int i = 0; i < mx; i++) {
            adj[i].clear(); // Clear adjacency list for each test case
        }

        int n, m;
        cin >> n >> m;

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].PB(v);
            adj[v].PB(u);
        }

        int start = 1;
        int goal = n;

        bfs(start, goal);   // Start BFS from node 1 to find the path to node n
        printPath(goal);    // Print the path from start to goal
    }

    return 0;
}
