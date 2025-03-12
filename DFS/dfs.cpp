#include <bits/stdc++.h>
using namespace std;
void intcode(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    intcode();
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        
        // Directions mapping based on moves in string `s`
        // N: (0,1), E: (1,0), S: (0,-1), W: (-1,0)
        vector<pair<int, int>> directions;
        for (char c : s) {
            if (c == 'N') directions.emplace_back(0, 1);
            else if (c == 'E') directions.emplace_back(1, 0);
            else if (c == 'S') directions.emplace_back(0, -1);
            else if (c == 'W') directions.emplace_back(-1, 0);
        }
        
        // Calculate net movement after one full cycle of `s`
        int cycle_dx = 0, cycle_dy = 0;
        for (const auto &direction : directions) {
            cycle_dx += direction.first;
            cycle_dy += direction.second;
        }
        
        // Initialize Alice's position at (0, 0)
        int x = 0, y = 0;
        
        // Set a reasonable limit for the number of cycles
        bool found = false;
        for (int cycle = 0; cycle < 1000; ++cycle) {
            for (const auto &direction : directions) {
                // Update position based on current direction
                x += direction.first;
                y += direction.second;
                
                // Check if Alice has reached the Red Queen's position
                if (x == a && y == b) {
                    found = true;
                    break;
                }
            }
            if (found) break;
            
            // Optimization: If net displacement after each cycle is (0, 0) and Alice hasn't reached the target, it’s unreachable
            if (cycle_dx == 0 && cycle_dy == 0) {
                break;
            }
        }
        
        // Output result for the current test case
        cout << (found ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
