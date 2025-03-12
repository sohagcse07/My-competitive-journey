#include <bits/stdc++.h>
using namespace std;


int a[] = {0, 3, 2, 4, 1, 8, 5, 6, 2};

void merge ( int l , int mid , int r){

	int p = l;

	int q = mid+1;

	int len = r-l+1;

	vector<int> v(len);

	int k = 0;

	for(int i=l; i<=r; i++){

		if ( p > mid){

			v[k] = a[q];
			k++ , q++;
		}

		else if ( q > r){

			v[k] = a[p];

			k++, p++;
		}

		else if ( a[p] <= a[q] ){

			v[k] = a[p];

			k++,p++;
		}
		else{

			v[k] = a[q];
			k++,q++;
		}
	}

	k = 0;

	for(int i=l; i<=r; i++){

		a[i] = v[k];
		k++;
	}
}


void MergeSort ( int l , int r){

	cout<<l << " " << r << endl;

	if ( l == r ) return;


	int mid = (l+r)/2;

	MergeSort ( l , mid);
	MergeSort ( mid+1, r);

	merge ( l , mid , r);


	for(int i=1; i<=8; i++){
		cout<<a[i] <<" ";
	}

	cout<<endl;
}


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);




  for(int i=1; i<=8; i++){

  	cout<<a[i] << " ";
  }

  cout<< endl;


  MergeSort ( 1 , 8);










  return 0;
}