#include <bits/stdc++.h>

using namespace std;

void intcode(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}

const int mx = 1e5;

int arr[mx];

int presum[mx];


int main(){

    intcode();

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>arr[i];

        presum[i] = presum[i-1] + arr[i];
    }

    for(int i=1; i<=n; i++){
        cout<<presum[i]<<" ";
    }

    cout<<endl;




}
