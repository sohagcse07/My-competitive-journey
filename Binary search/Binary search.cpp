//In the name of ALLAH

// Insallah one day success will be your

#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  int n , q;

  cin>>n>>q;


  int a[n+123];

  for (int i=0; i<n; i++ ){

  	cin>>a[i];

  }


  while(q--){

  	int x ;
  	cin>>x;

  	int l = 0 , r = n-1;

	  int ans = -1;

	 while( l<=r ){

		int mid = (l+r)>>1;

		if ( a[mid] == x ){

			ans = mid;
		}

		if ( a[mid] < x ){

			l = mid+1;
		}else{

			r = mid-1;
		}
	}
    
    cout<<ans<<endl;
  }







    return 0;
}


// 1.Understand the problem

// 2.Plan 

// 3.Divide & Conquor  // part by part a problem

// 4. Stuck while coding 

// practice must be