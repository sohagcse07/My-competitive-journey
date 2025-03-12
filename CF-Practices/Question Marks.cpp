#include <bits/stdc++.h>
using namespace std;


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int t;
  cin>>t;

  while(t--){
  	int n;
  	cin>>n;
  	string s;
  	cin>>s;

  	int cntA = 0 , cntB = 0, cntC = 0, cntD = 0;

  	for(char c:s){

  		if( c == '?'){
  			continue;
  		}

  		if( c == 'A') cntA++;

  		if( c == 'B') cntB++;

  		if( c == 'C') cntC++;

  		if( c== 'D') cntD++;


  	}

  	int score = 0l;


  	score = min(cntA,n) + min(cntB,n) + min(cntC,n) + min(cntD,n);

  	cout<<score<<endl;

  }








  return 0;
}