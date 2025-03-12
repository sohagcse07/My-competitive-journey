#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define by "\n"

const int mx = 1e7+123;

ll arr[mx];


int main(){

    int n,m;

    cin>>n>>m;

    while(m--){
        int a,b,d;

        cin>>a>>b>>d;

        arr[a] += d;

        arr[b+1] -= d;

        /*
        for(int i=a; i<=b; i++){
            arr[i] +=d; // eter complexity basi
        }*/
    }

    for(int i=1; i<=n; i++){ // pre sum calculate korci
        arr[i] = arr[i-1]+arr[i];
    }

    ll max_val = -1;

    for(int i=1; i<=n; i++){

        if( max_val < arr[i]){
            max_val = arr[i];
        }
    }

    cout<<max_val<<by;








    return 0;
}
