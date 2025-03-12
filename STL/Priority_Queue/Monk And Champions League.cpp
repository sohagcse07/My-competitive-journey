// in the name of allah

#include <bits/stdc++.h>
using namespace std;

//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/
const int mx= 1e5+123;

int a[mx];

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int m,n;

  cin>>m>>n;

  priority_queue <int> q;

  for(int i=0; i<m; i++){
  	cin>>a[i];
  }

  for(int i=0; i<m; i++){
  	q.push(a[i]);
  }

  long long ans=0;

  for(int i=0; i<n; i++){

  	if(!q.empty()){
  		int a = q.top();
  		q.pop();

  		ans+=a;
  		a--;

  		if(a>0) q.push(a);
  	}
  }


  cout<< ans <<endl;






  return 0;
}