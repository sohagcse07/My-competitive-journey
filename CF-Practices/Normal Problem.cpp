#include <bits/stdc++.h>
using namespace std;

#define S second
#define F first

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);



  int t;
  cin>>t;

  while ( t-- ){

  	string s;
  	cin>>s;


  	reverse(s.begin() , s.end());


  	for (char i = 0; i <s.size(); i+=1){

  		if ( s[i] == 'p'){

  			s[i] = 'q';
  		}else if ( s[i] == 'q' ){

  			s[i] = 'p';
  		}else{

  			s[i] = 'w';
  		}
  	}



  	cout<< s << endl;



/*
  	int pcnt = 0;
  	int qcnt = 0;
  	int wcnt = 0;


  	for ( auto c:s ){

  		if ( c == 'p') pcnt++;

  		else if ( c == 'q')qcnt++;

  		else wcnt++;
  	}

  	string s1 = " ";



  	for ( auto c:s ){

  		if ( c == 'p'){

  			while (pcnt){

  				s1 += 'q';
  			}
  		}else if ( c == 'q'){

  			while ( qcnt ){

  				s1+= 'p';
  			}
  		}else{

  			s1 += 'w';
  		}
  	}


  	cout<< s1 << endl;
*/

  }








  return 0;
}