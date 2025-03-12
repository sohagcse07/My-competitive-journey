#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define F first
#define S second
#define pb bush_back
#define mp make_pair
#define U upper_bound
#define L lower_bound
#define endl "\n"


void intcode(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
}

ll dp[220][25][15] , a[220]; // sum gola , mode , cnt of m koto ta m nite parbo

int n,m,D;


ll solve(int i , int rem , int cnt){ // idx , mode valu , cntM

	if( i > n || cnt == m ){
		return ( rem == 0 && cnt == m); // rem == 0 divisor or not , D,hole T n hole F
		// m er soman hole cnt ret T or F  
	}

	if(dp[i][rem][cnt] != -1 ) return dp[i][rem][cnt];

	ll ret = 0;

	int d1 = (a[i] + rem ) % D; // D diya mode kore valu ta niya jaiteci complexity less
	// koranor jono

	if( d1 < 0 ) d1 += D; // negative Mode er jono

	ret += solve ( i+1 , d1 , cnt+1 ); // idx + ,mode valu + ,m++ , kaj korteci

	ret += solve ( i+1 , rem , cnt); // kaj korteci na


	return dp[i][rem][cnt] = ret; //store


}
int  main(){
	intcode();


	int q,tc =0;

	while(cin>>n>>q){
		tc++;
		if( n == 0 && q == 0) break;


		for(int i=1; i<=n; i++) cin>>a[i];

		cout << "SET " << tc << ":\n";

		for(int i=1; i<=q; i++){
			memset(dp,-1,sizeof(dp));
			cin>>D>>m; // mode korbi D diya and m cnt er valu 
			cout <<"QUERY "<<i<< ": " <<solve(1,0,0)<<endl;
		}
	}

/*
10 2
1
2 
3
4 
5 
6 
7 
8 
9 
10
5 1
5 2
5 1
2
3
4
5
6
6 2
0 0 
//
SET 1:
QUERY 1: 2
QUERY 2: 9
SET 2:
QUERY 1: 1
*/




	return 0;
}

