#include <bits/stdc++.h>
using namespace std;

//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/
const int mx=1e5+123;

int a[mx];

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


priority_queue<int> q;


int n;
cin>>n;

for(int i=0; i<n; i++){
	cin>>a[i];
}

for(int i=0; i<n; i++){
	q.push(a[i]);

	if(q.size()>=3){

		int a1 = q.top();
		q.pop();

		int a2 = q.top();
		q.pop();

		int a3 = q.top();
		q.pop();

		cout<< 1ll*a1*a2*a3 <<endl;

		q.push(a1);
		q.push(a2);
		q.push(a3);

	}

	else cout<<-1<<endl;
}

/*
5
1 2 3 4 5
//
-1
-1
6
24
60
*/







  return 0;
}