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


const int mx = 1e5+123;
ll dist[mx];
vii adj[mx];


void dijkstra ( int s , int n){

    for(int i=1; i<=n; i++) dist[i] = infLL;

    dist[s] = 0;

    priority_queue<pll,vll,greater<pll>> pq;

    pq.push({0,s});

    while(!pq.empty()){

        int u  = pq.top().S;
        int curD = pq.top().F;
        pq.pop();

        if( dist[u] < curD ) continue;

        for ( auto &v: adj[u]){

            if( curD + v.S < dist[v.F]){
                dist[v.F] = curD + v.S;
                pq.push({ dist[v.F],v.F});
            }
        }
    }
}

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        for( int i = 0; i<=n; i++){
            adj[i].clear();
        }

        for(auto &u:times){
            adj[ u[0] ].PB({ u[1], u[2]});
        }

        dijkstra ( k , n);
        ll MX = -1;

        for(int i = 1; i<=n; i++){

            MX = max ( dist[i] , MX);
        }

        if ( MX == infLL) MX = -1;

        return MX;
    }
};

void intcode(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
}


int main() {
	intcode();

    Solution sol;
    vector<vector<int>> times = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
    int n = 4, k = 2;
    cout << sol.networkDelayTime(times, n, k) << endl; // Output should be 2
  
    return 0;

}
