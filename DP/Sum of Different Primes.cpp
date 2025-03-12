#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

const int mx = 1200;

// 1200 er jono prime high prime hobe // pi (n) <= 1.6 * n/ln(n);

// so 1200 er jono upper prime need 255 ami extra babe 260 nici

long long dp[260][mx][15]; // prime , sume valu , koto ta prime nibo 

// com is = dp*mx*15 = 4.3e6
int n,k;

bitset<mx> isPrime;

vector<int> primes;

void PrimesGen(int n){

	for(int i=3; i<=n; i+=2) isPrime[i] = 1;

	int sq = sqrt(n);

	for(int i=3; i<=sq; i+=2){

		if(isPrime[i]){
			for(int j=i*i; j<=n; j+=i){
				isPrime[j] = 0; 
			}
		}
	}

	primes.push_back(2);

	for(int i=3; i<=n; i+=2){

		if(isPrime[i]){
			primes.push_back(i);
		}
	}
}


long long solve (int i , int j , int cnt){ // i = prime / j = sume of p / cnt = koyta prime nici


	if( i == primes.size() || j >= n || cnt >= k){

		return ( j == n && cnt == k); // p er sum ta N er == or p er cnt == k er soman 
		// true or false return korbe
	}

	if( dp[i][j][cnt] != -1 ) return dp[i][j][cnt];


	long long ret = 0;
							// p    // sumofP   //cnt k 
	ret += solve (i+1 , j+primes[i], cnt+1); // kaj korteci 1

	ret += solve (i+1 , j , cnt); // kaj korteci na 0 

	return dp[i][j][cnt] = ret; // store korteci
}



int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int lim = 1e3; // prime gen korteci

  PrimesGen(lim);


  while(cin>>n>>k){

  	if( n == 0 && k == 0 ) break;

  	memset(dp, -1 , sizeof(dp));

  	cout<<solve(0,0,0)<<endl;
  }

  /*
24 3
24 2
2 1
1 1
4 2
18 3
17 1
17 3
17 4
100 5
1000 10
1120 14
0 0 
//
2
3
1
0
0
2
1
0
1
55
200102899
2079324314
*/









  return 0;
}