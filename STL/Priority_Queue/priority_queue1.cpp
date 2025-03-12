#include <bits/stdc++.h>
using namespace std;


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // log2(n) e kaj kore
  priority_queue<int> q;
  //priority_queue<int,vector<int> , greater<int>>q; sort


  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);


  cout<<q.top()<<endl;

  while( !q.empty()){

  	cout<<q.top()<<endl;
  	q.pop();
  }

  cout<<q.size()<<endl;

  cout<<endl;

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
// pair sort in pq
  pq.push({1,2});
  pq.push({6,7});
  pq.push({3,4});
  pq.push({5,6});
/* // rak list
  pq.push({1, -2});
  pq.push({6,-7});
  pq.push({3,-4});
  pq.push({5,-6});
*/
  while(!pq.empty()){

  	cout<<pq.top().first<<" " << pq.top().second<<endl;
  	//cout<<pq.top().first<<" " << pq.top().second*-1<<endl;

  	pq.pop();
  }





  return 0;
}