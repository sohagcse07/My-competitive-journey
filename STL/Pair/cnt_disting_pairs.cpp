#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void intcode(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}

int a[123];

int main(){

    intcode();

    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;

        for(int i=0; i<n; i++) cin>>a[i];

        vector<pair<int,int>> v; //pair gola stor korar jonno

        for(int i=0; i<n; i++){ //pair gola banaitaci
            for(int j=0; j<n; j++){

                if( i != j && a[i] - a[j] == k){

                    v.push_back(make_pair(a[i],a[j]));
                }
            }
        }

        int Sz = unique(v.begin(),v.end()) - v.begin(); // log2(n^2)

        cout<<Sz<<endl;

        // t = 100 , n = 100
        // complexity is: T*N^2*log2(n^2)
        // 100*10^4*14 = 1.4*10^7 // 1s e run hobe

    }






    return 0;
}
