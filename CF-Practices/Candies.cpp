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

  	vector<int> v;

  	if( n%2 == 0){
  		cout<<-1<<endl;
  		continue;
  	}


  	while( n!=1){

  		int x = n/2; // 3/2

  		if(x%2==0){ // 2
  			n = (n+1)/2; // 5+1/2 = 3
  			v.push_back(1); // v = {1,1,1}
  		}else{
  			n /=2;  //3/2 = 1 loop brak
  			v.push_back(2); //{1,1,1,2}
  		}
  	}


  	cout<<v.size()<<endl;;

  	reverse(v.begin(),v.end());
  	
  	for(auto u:v){
  		cout<<u<<" ";
  	}
  	cout<<endl;
  }








  return 0;
}