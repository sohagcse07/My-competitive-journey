#include <bits/stdc++.h>
using namespace std;
/*
vector<int> arrr ( int n ,int a , int b , int c ){


	vector<int> ar;

	ar.push_back(a);

	int cutent = a;

	int valu[] = { a , b , c };

	for ( int i=1; i<n; i++ ){

		cutent +=valu[i % 3 ];

		ar.push_back(cutent);
	}

	return ar;
}
*/


int solve( int n , int a , int b , int c ){

	int cy_sum = a + b + c;

	int total_dis = 0 ;

	int daycnt = 0;


	while ( total_dis + cy_sum < n ){

		total_dis += cy_sum;

		daycnt += 3;
	}


	if ( total_dis + a >= n ) return daycnt += 1;

	if ( total_dis + a + b >= n ) return daycnt +=2;

	return daycnt+=3;
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

	/*

	int t;
	cin>>t;

	while (t--){

		int n , a , b , c;
		cin>>n>>a>>b>>c;

		vector<int> vec =  arrr(  n ,a , b , c);


		int l = 0 , r = n-1;

		int ans = -1;


		while ( l<=r ){

			int mid = (l+r)>>1;


			if (vec[mid] == n ){

				ans = mid;
			}


			if ( vec[mid] <= n ){

				l = mid+1;
			}else{

				r = mid-1;
			}
		}


		cout << ans << endl;
	}



*/


  int t;
  cin>>t;

  while (t--){

  	int n , a , b , c;

  	cin>>n>>a>>b>>c;


  	//cout << solve ( n , a , b , c ) << endl;


  	int culval = ( n + a + b + c - 1 ) / ( a + b + c);

  	int day = culval * 3;

  	int total_dis = culval * ( a + b + c);




  	if ( total_dis - c  >= n ){

  		total_dis -= c;

  		day--;
  		if ( total_dis - b >= n ){

	  		total_dis -= b;
	  		day--;
  		}
  	}

  	


  	cout << day << endl;
  }





  return 0;
}