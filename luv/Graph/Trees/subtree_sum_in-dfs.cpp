// In the name of ALLAH
// Insallah one day success will be yours

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

#define mem(a,b) memset(a, b, sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

const int mx = 1e5+123;

bool vis[mx]; // Visited array
vector<int> adj[mx]; // Adjacency list
int subtree_sum[mx]; // To store subtree sums

// DFS function to calculate subtree sums
void dfs (int u, int par = 0) {
    vis[u] = 1; // Mark the current node as visited
    subtree_sum[u] = u; // Add the current node to the sum

    // Traverse all neighbors (children) of node u
    for (auto v : adj[u]) {
        if (!vis[v] && v != par) { // Avoid revisiting the parent node
            dfs(v, u); // Recursive DFS call for child v
            subtree_sum[u] += subtree_sum[v]; // Add the child's subtree sum to the current node
        }
    }
}

// Function to reset the vis[] and subtree_sum[] arrays
void reset(int n) {
    for (int i = 1; i <= n; i++) {
        vis[i] = 0; // Reset visited array
        subtree_sum[i] = 0; // Reset subtree sum array
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

    int n;
    cin >> n;

    // Read the edges of the tree
    for (int i = 1; i <= n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].PB(v);
        adj[v].PB(u);
    }

    int q;
    cin >> q;

    // Process each query
    while (q--) {
        int node;
        cin >> node;

        reset(n); // Reset vis[] and subtree_sum[] for each query
        dfs(node); // Run DFS from the queried node

        // Output the sum of the subtree for the queried node
        cout << subtree_sum[node] << endl;
    }

    return 0;
}

/*
Total Time Complexity:
Tree building: O(n)
For each query: O(n) (DFS + reset)
Total for q queries: q × O(n)
So, the total time complexity of the entire program is:

𝑂(𝑛)+𝑂(𝑞×𝑛)=𝑂(𝑛+𝑞×𝑛)

*/