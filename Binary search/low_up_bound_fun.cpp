#include <bits/stdc++.h>
using namespace std;


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
/*
5. Number of values smaller than x = lo
6. Number of values greater or equal to x = n - lo
7. Number of values less than or equal to x = up
8. Number of values greater than x = n - up
*/



  vector<int> v = { 3 , 4 , 5 , 6 , 6 , 8 , 8 , 12};


  int x = 6;

  int low = lower_bound( v.begin() , v.end() , x ) - v.begin();


  cout<< low << endl;

  int up = upper_bound( v.begin() , v.end() , x ) - v.begin();


  cout << up << endl;








  return 0;
}