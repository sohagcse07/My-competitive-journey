#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int f(int a,int b){

	if( a > b) return 1;

	if( a == b) return 0;

	if( b > a) return -1;

	return 0;
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

  while(t--){

	  int a1,a2,b1,b2;
	  cin>>a1>>a2>>b1>>b2;

	  int ans = 0;

	  if(f(a1,b1) + f(a2,b2) > 0) ans+=1;

	  if(f(a1,b2) + f(a2,b1) > 0) ans+= 1;

	  if(f(a2,b1) + f(a1,b2) > 0) ans+=1;

	  if(f(a2,b2) + f(a1,b1) > 0) ans+=1;



	  cout<<ans<<endl;

  }



  return 0;
}