#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef vector<int> vi;

const int mx = 2e4+123;

vi adj[mx];
bool vis[mx];
bool isCannectnode[mx];

int cntV,coppCnt ; // vampiers count korteci and all cannected copponet count korteci

void dfs ( int u , int color ){ // first node ta ami 1 color kori and connected node ke 2 color korci

	vis[u] = 1;


	if ( color == 1) cntV++; // vampirs cnt

	coppCnt++; // total cannectet comppo size count

	int colorChange; // u node ta 1 color tahkele v node ta 2 color korteci

	if ( color == 1 ) colorChange = 2;
	else colorChange = 1;


	for (auto v: adj[u] ){

		if (!vis[v] ){

			dfs(v,colorChange);
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


  int t;
  cin>>t;

  for(int tc=1; tc<=t; tc++ ){
  	
  	for(int i=0; i<mx; i++ ){ // memset it's must be

  		adj[i].clear();
  		vis[i] = 0;
  		isCannectnode[i] = 0;
  	}


  	int n;
  	cin>>n;

  	for(int i=1; i<=n; i++ ){

  		int u , v ;

  		cin>>u>>v;

  		adj[u].push_back(v);
  		adj[v].push_back(u);

  		isCannectnode[u] = 1;
  		isCannectnode[v] = 1;
  	}


  	int ans = 0;


  	for (int i=1; i<=20000; i++ ){

  		if( isCannectnode[i] == 1 && (!vis[i]) ){

  			coppCnt = 0 ,cntV = 0; // total compponent - vampairs 
  			dfs(i,1);

  			ans += max ( cntV , coppCnt - cntV); // lykans and vampairs er max ta ans 
  		}
  	}

  cout<<"Case " << tc << ": " << ans << endl;


  }








  return 0;
}