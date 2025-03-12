#include <bits/stdc++.h>
using namespace std;

void intcode(){
	#ifndef ONLINE_JUDGE
      	freopen("input.txt", "r", stdin);
      	freopen("output.txt", "w", stdout);
  	#endif
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    intcode();
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++) cin >> v1[i];
        for (int i = 0; i < n; i++) cin >> v2[i];


        int cnt = 0;
        bool f1 = false;

        for (int i = 0; i < n - 1; i++) {
            
            if ( v1[i] > v2[i+1] ){
                cnt += max ( 0 , ( v1[i] - v2[i+1] ));
            }
        }

        cnt += v1[n - 1]; // last elemnt


        cout << cnt << '\n';
    }

    return 0;
}
