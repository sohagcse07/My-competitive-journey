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
typedef vector<pii> vpii;
typedef vector<pll> vpll;
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


int dx[] = {+1, -1, 0, 0}; // Down, Up, Right, Left
int dy[] = {0, 0, +1, -1};

const int mx = 212;

char c[mx][mx];

int levFire[mx][mx]; 
int levJan[mx][mx];

int T , N, M;

vpii s;


void bfsOfFire ( ){

	mem( levFire, -1 );  // Initialize fire levels to -1 (unreachable)


	queue<pii> q;

	// Initialize the queue with all fire sources and set their levels to 0
	for ( auto u:s ){

		q.push( u );

		levFire[u.F][u.S] = 0;
	}

	while ( !q.empty() ){

		int x = q.front().F;
		int y = q.front().S;
		q.pop();

		for (int i=0; i<4; i++ ){

			int x1 = x + dx[i];
			int y1 = y + dy[i];

			// Check if the neighboring cell (x1, y1) is within grid bounds,
			// not a wall, and has not been visited by fire yet.
			if ( x1 >= 1 && x1 <=N && y1 >= 1 && y1<= M && c[x1][y1] != '#' && levFire[x1][y1] == -1 ){

				// Set the time it takes for fire to reach cell (x1, y1),
    			// which is 1 more than the time to reach the current cell (x, y).
				levFire[x1][y1] = levFire[x][y] + 1;

				// Add (x1, y1) to the queue to continue spreading the fire
    			// from this cell in future iterations.
				q.push({ x1, y1 });
			}
		}
	}
}


int bfsOfJan ( int startX , int startY ){

	mem( levJan , - 1 );


	queue<pii> q;

	q.push( { startX , startY });

	levJan[startX][startY] = 0;

	while ( !q.empty() ){

		int x = q.front().F;
		int y = q.front().S;
		q.pop();

		 // Check if on the boundary, which means escape is possible (1-based indexing)
		if ( x == 1 || x == N || y == 1 || y == M ){

			return levJan[x][y] + 1;// Return the escape time
		}


		for ( int i=0; i<4; i++ ){

			int x1 = x + dx[i];
			int y1 = y + dy[i];

			// Move if within bounds, not a wall, not visited, and safer than fire level
			if ( x1 >= 1 && x1 <= N && y1 >= 1 && y1 <= M && c[x1][y1] != '#' && levJan[x1][y1] == -1 ){

				if ( (levFire[x1][y1] == -1) || (levJan[x][y] + 1 < levFire[x1][y1] )){

					levJan[x1][y1] = levJan[x][y] + 1;

					q.push({ x1 , y1 });
				}
			}
		}
	}

	return -1 ; //	// Impossible to escape
}


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  cin>>T;

  for (int tc=1; tc<=T; tc++ ){
	

  	cin>>N>>M;

  	int x = -1 , y = -1; // x , y coordinate
	s.clear();// Clear fire sources for each test case
  
  	for(int i=1; i<=N; i++ ){
  		for(int j=1; j<=M; j++ ){
  			cin>> c[i][j];

  			if ( c[i][j] == 'J' ){
  				x = i;
  				y = j; // coordinate gola set kortaci
  			}
  			else if ( c[i][j] == 'F' ){

  				s.PB({ i , j }); // multi source gola vec of pair e push korteci
  			}
  		}
  	}
  	// Simulate fire spread
  	bfsOfFire();
  	
  	// Simulate person's escape
  	int ans = bfsOfJan(x , y );

  	cout << "Case " << tc << ": ";

  	if ( ans == -1 ){

  		cout << "IMPOSSIBLE\n";
  	}else{

  		cout << ans << endl;
  	}
  }






    return 0;
}
