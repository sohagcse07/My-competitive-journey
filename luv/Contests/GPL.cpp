#include <bits/stdc++.h>
using namespace std;

//https://www.hackerearth.com/problem/algorithm/gpl/
int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  int t;
  cin>>t;

  while(t--){
  	int n;
  	cin>>n;

  	string s;
  	cin>>s;

  	long long ans = 0;

  	long long pow2 = 1;

  	for(int i = s.size()-1; i>=0; i--){

  		int binary_digit = s[i] - '0';

  		ans = ans + (binary_digit * pow2);

  		pow2 = pow2 * 2;

  	}
    cout<<ans<<endl;
  }


  //101 = 5

  //1*2^2 + 0*2^1 + 1*2^0 = 4 + 0 + 1 = 5
    
/*
#include <iostream>
#include <string>

using namespace std;

int main() {
    string binaryString = "1101";  // Step 1: Define a binary string
    int decimalValue = stoi(binaryString, nullptr, 2);  // Step 2: Convert the binary string to a decimal integer

    cout << "Decimal value: " << decimalValue << endl;  // Step 3: Print the decimal value

    return 0;
}
*/






/*
3
4
1111
2
10
4
1010
//
15
2
10
*/
// expline

// 1111 = 15 

/*
for last 1 
1*1 = 1 = ans = 1

-> pow = 1*2 = 2

for second last 1 

1*2 = 2 = ans = 1+2

-> pow = 2*2 = 4

for 3rd 1 

1*4 = 4 = ans = 1+2+4

-> pow = 4*4 = 8

for 1st 1 

1*8 = 8 ans = 1+2+4+8

so ans is 

ans = 15 for bainary str 1111 er jonno decimal e 


*/



  return 0;
}