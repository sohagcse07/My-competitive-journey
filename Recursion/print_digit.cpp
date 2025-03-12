#include <bits/stdc++.h>
using namespace std;


void print_digit ( int  n ){

	if ( n == 0 ) return;


	int last_digit = n % 10 ;

	print_digit( n / 10 ); // forward print like 12345 // recursive HOLD hobostay acce sob gola call see hoile tar nicer kaj korbe

	cout<< last_digit << endl;

	//print_digit ( n / 10 ); // backward print like 54321
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);



  int n;
  cin>>n;

  print_digit(n);







  return 0;
}