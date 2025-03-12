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

/** Given Q Queries, Q <= 10^5
 * In each query given V,
 * print subtree sum of V & Number of even numbers
 * in subtree of V
**/ // N = 10^5
const int mx = 1e5+13;

int vis[mx];

vi adj[mx];

int subtree_sum[mx];
int even_ct[mx];


// DFS function to calculate subtree sum and even node count
void dfs ( int u , int par = 0 ){

	vis[u] = 1;// Mark current node as visited

	if ( u % 2 == 0 ) even_ct[u]++; // If the node is even, increment the even count

	subtree_sum[u] += u; //// Add current node to its subtree sum

	// Traverse through child node
	for( auto v:adj[u] ){

		if (!vis[v] && v != par ){// Avoid revisiting parent node

			dfs ( v , u );  // Recursive DFS call for the child node

			subtree_sum[u] += subtree_sum[v]; // Add the child's subtree sum to the current node's sum
			even_ct[u] += even_ct[v]; // Add the child's even count to the current node's even count
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


  int n;
  cin>>n;

  for(int i=1; i<=n-1; i++ ){

  	int u , v;
  	cin>>u>>v;

  	adj[u].PB(v);
  	adj[v].PB(u);
  }

// Run DFS starting from node 1 (assuming 1-based indexing)
  dfs(1);

/*
  for(int i=1; i<=n; i++ ){

  	cout<<subtree_sum[i] << " " << even_ct[i] <<endl;
  }
13
1 2
1 3
1 13
2 5
3 4
5 6 
5 7 
5 8
8 12
4 9
4 10
//
91 6
40 4
37 2
34 2
38 3
6 1
7 0
20 2
9 0
21 1
11 0
12 1
13 0
*/
  int q;
  cin>>q;

  while(q--){

  	int node ;
  	cin>>node;
  	cout<<subtree_sum[node] << " " << even_ct[node] << endl;
  	/*
  	13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
4 11
3
1
5
3
//
91 6
38 3
37 2
*/
  }

/*

time complexity is:

1.DFS traversal: O(n)
2.Query handling: O(q)

total complexity is:
O( N + Q )
*/



    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be