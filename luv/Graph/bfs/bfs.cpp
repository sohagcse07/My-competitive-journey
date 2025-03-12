#include <bits/stdc++.h>
using namespace std;


// O ( V + E)
const int mx = 1e5+123;

bool vist[mx];
int leve[mx];

vector<int> adj[mx];


void bfs ( int  s  ){

	leve[s] = 0 ;
	vist[s] = 1 ;

	queue<int> q;

	q.push( s );

	while ( !q.empty() ){

		int u = q.front();
		q.pop();

		for ( auto v: adj[u] ){

			if ( !vist[v] ){

				q.push(v);

				vist[v] = 1;
				leve[v] = leve[u] + 1;
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


  int n;
  cin>>n;

  for (int i=1; i<n; i++ ){

  	int u , v;
  	cin>>u>>v;

  	adj[u].push_back( v );
  	adj[v].push_back( u );
  }


  bfs(1);


  for (int i=1; i<=n; i++ ){

  	cout << vist[i] << " " ;
  }

  cout << endl;

  for (int i=1; i<=n; i++ ){

  	cout << i << ": ";
  	cout << leve[i] << " ";
  }
  cout << endl;









  return 0;
}