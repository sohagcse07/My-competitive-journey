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

int dx[] = { 0, 0, +1, -1};
int dy[] = { +1, -1, 0, 0};

const int mx = 223+1;

char c[mx][mx];
int n,m;

vector<pair<int,int>> s;

int levFire[mx][mx];
int levJan[mx][mx];

void bfs_Fire(){

	mem(levFire, - 1);

	queue<pair<int,int>> q;

	for(auto u:s){
		q.push(u);
		levFire[u.first][u.second] = 0 ; // multi soruce gola 0 kore ditaci
	}


	while(!q.empty()){

		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for(int i=0; i<4; i++){

			int x1 = x + dx[i];
			int y1 = y + dy[i];

			if( x1>=1 && x1<=n && y1>=1 && y1<=m && c[x1][y1] != '#' && levFire[x1][y1] == -1){
				levFire[x1][y1] = levFire[x][y] + 1;
				q.push(make_pair(x1,y1));
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

  int t;
  cin>>t;

  for(int tc=1; tc<=t; tc++){

  	cin>>n>>m;

  	int x , y;

  	for(int i=0; i<n; i++){
  		for(int j=0; j<m; j++){
  			cin>>c[i][j];

  			if(c[i][j] == 'j'){
  				x = i;
  				y = j;
  			}
  			else if(c[i][j] == 'F'){
  				s.push_back(make_pair(i,j));
  			}
  		}
  	}
  }






    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be