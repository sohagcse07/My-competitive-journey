#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

char upper(char c){

	return 'A' + (c - 'a'); //ascii valu like // c = c dorci


	// "c" = 99 - "a" = 97 = 2
	// "A" = 65+2 = 67 
	// "C" = 67  

	// "b" = 98 - "a" = 97 = 1
	// "A" = 65+1 = 66
	// B = 66 
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  while(true){
  	string s;
  	cin>>s;

  	if(s.size()== 0){
  		break;
  	}

  	for(int i=0; i<s.size(); i++){
  		s[i] = upper(s[i]);
  	}

  	cout<<s<<endl;
  }


  /*
  subscribe to the luv channel
  //
	SUBSCRIBE
	TO
	THE
	LUV
	CHANNEL
  */




  return 0;
}