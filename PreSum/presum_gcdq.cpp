
#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void intcode(){
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
}
int main(){


    int t;
    cin>>t;

    while(t--){
        int n, q;

        cin>>n>>q;

        int a[n+10];

        int forward_a[n+10];
        int backward_a[n+10];

        for(int i=1; i<=n; i++){
            cin>>a[i];
        }

        forward_a[0] = backward_a[n+1] = 0; // 0 er gcd 0 so

        for(int i=1; i<=n; i++){
            forward_a[i] = __gcd(forward_a[i-1],a[i]); // i to n er precalulate valu of gcd
        }
        for(int i=n; i>=1; i--){
            backward_a[i] = __gcd(backward_a[i+1],a[i]); // n to i er precalu valu of gcd
        }

        while(q--){
            int l,r;
            cin>>l>>r;

            cout<<__gcd(forward_a[l-1],backward_a[r+1]);

            //__gcd(a,b);

            /*
            int gc = 0;
            for(int i=1; i<=l-1; i++){
                gc = __gcd(gc,a[i]);
            }
            for(int i=r+1; i<=n; i++){
                gc = __gcd(gc,a[i]);
            }
            cout<<gc<<endl; ei code er time complexity vasi sun 1s e run korbe na so ude precalcul
            */
        }
    }



    return 0;
}
