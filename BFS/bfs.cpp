// In the name of ALLAH
// Insallah one day success will be yours

#include <bits/stdc++.h>
using namespace std;

// Typedefs for simplifying commonly used data types
typedef long long ll;
typedef vector<int> vi;

// Macro definitions to simplify code
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'

// Maximum number of nodes in the graph
const int mx = 1e5 + 123;

// Graph representation and level array
vector<int> adj[mx];  // adjacency list for storing graph
int lev[mx];          // level array to store distance from the source node

// Breadth-First Search (BFS) function to traverse the graph
void bfs(int s) {
    // Initialize all levels to -1 (unvisited)
    memset(lev, -1, sizeof(lev));
    
    // Set the level of the source node to 0
    lev[s] = 0;

    // Queue for BFS
    queue<int> q;
    q.push(s);  // Start BFS from the source node

    // BFS loop
    while (!q.empty()) {
        int u = q.front(); // u node 
        q.pop();

        // Traverse all neighbors of the current node
        for (auto v : adj[u]) {
            // If the neighbor hasn't been visited, update its level and add to queue
            if (lev[v] == -1) {
                lev[v] = lev[u] + 1;  // Set level of v as level of u + 1
                q.push(v);            // Push neighbor to the queue
            }
        }
    }
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        // Redirect input and output to files (useful for local testing)
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);  // Speed up I/O
    cin.tie(0);  // Untie cin from cout
    cout.tie(0); // Untie cout from cin

    int n, m;
    cin >> n >> m;  // Read the number of nodes and edges

    // Read the edges and populate the adjacency list
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;  // Read each edge (u, v)
        adj[u].PB(v);   // Add edge u -> v
        adj[v].PB(u);   // Add edge v -> u (since graph is undirected)
    }

    bfs(1);  // Perform BFS starting from node 1

    // Optional: Output the level of each node after BFS (for debugging/understanding)
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": Level " << lev[i] << endl;
    }

    /*
5 4
1 2
1 3
2 4
3 5
//
Node 1: Level 0
Node 2: Level 1
Node 3: Level 1
Node 4: Level 2
Node 5: Level 2
*/


    return 0;
}

// 1. Understand the problem
// 2. Plan
// 3. Divide & Conquer // Break down the problem part by part
// 4. If stuck while coding, practice is key
