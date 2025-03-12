#include <bits/stdc++.h>
using namespace std;

void intcode(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}

int main() {
    intcode();
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; t++) {
        int N, C;
        cin >> N >> C;

        vector<int> dp(C + 1, 0);  // DP array to store maximum fun value for each capacity
        
        for (int i = 0; i < N; i++) {
            int S, F;
            cin >> S >> F;
            
            for (int j = C; j >= S; j--) {
                dp[j] = max(dp[j], dp[j - S] + F);
            }
        }
        
        cout << "Case " << t << ": " << dp[C] << endl;
    }
    
    return 0;
}
