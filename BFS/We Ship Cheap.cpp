// In the name of ALLAH
// Insallah one day success will be yours

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
#define all(a) (a).begin(),(a).end()

const int inf = 2000000000;       // Large value for integer infinity
const ll infLL = 9000000000000000000LL; // Large value for long long infinity
#define MOD 1000000007

// Global variables for BFS
map<string, vector<string>> adj; // Adjacency list to store graph connections
map<string, int> lev;            // Level map to store shortest path level for each city
map<string, string> par;         // Parent map for reconstructing the path from destination to source

// BFS function to find shortest path levels and parent mapping
void bfs(const string& start) {
    lev.clear();               // Clear previous levels data
    lev[start] = 1;            // Set starting city's level to 1
    queue<string> q;
    q.push(start);             // Initialize queue with the start city

    while (!q.empty()) {
        string current = q.front();
        q.pop();

        // Traverse all neighboring cities
        for (const auto& neighbor : adj[current]) {
            if (lev[neighbor] == 0) {           // If neighbor hasn't been visited
                lev[neighbor] = lev[current] + 1; // Update level of neighbor
                par[neighbor] = current;          // Set parent of neighbor for path reconstruction
                q.push(neighbor);                 // Add neighbor to queue
            }
        }
    }
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // Redirect input from file (for local testing)
    freopen("output.txt", "w", stdout); // Redirect output to file (for local testing)
    #endif

    ios_base::sync_with_stdio(0); // Speed up input/output
    cin.tie(0);
    cout.tie(0);

    int n;
    bool first_case = true;  // Flag to check if it's the first test case

    while (cin >> n) {       // Read number of connections in the current test case
        //if (n == 0) break;   // If no connections, end the input

        if (!first_case) cout << endl; // Print a newline between test case outputs
        first_case = false;

        adj.clear();         // Clear the adjacency list for each test case
        par.clear();         // Clear parent mapping for each test case

        // Read city connections and build the graph
        for (int i = 0; i < n; i++) {
            string city1, city2;
            cin >> city1 >> city2;
            adj[city1].PB(city2); // Add city2 as neighbor of city1
            adj[city2].PB(city1); // Add city1 as neighbor of city2
        }

        string source, destination;
        cin >> source >> destination; // Read source and destination cities

        bfs(source); // Run BFS from the source to calculate levels and parent mappings

        if (lev[destination] == 0) {  // If destination is unreachable (level is 0)
            cout << "No route\n";     // Output "No route" if no path exists
        } else {
            vector<pair<string, string>> path; // To store the path in order
            string current = destination;

            // Reconstruct path from destination to source using parent mapping
            while (par.find(current) != par.end()) {
                path.PB({par[current], current}); // Add the connection to path
                current = par[current];           // Move to the parent city
            }

            // Output path from source to destination
            reverse(all(path));                   // Reverse to get the path from source to destination
            for (const auto& link : path) {
                cout << link.F << " " << link.S << endl; // Print each step in the path
            }
        }
    }

/*
Example input:
3
JV PT
KA PT
KA HP
JV HP
2
JV PT
KA HP
JV HP
//
Expected output:
KA HP
PT KA
JV PT

No route
*/
    return 0;
}
