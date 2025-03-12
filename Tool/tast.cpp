#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
#define S second
#define F first

void intcode(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    intcode();
    
    int t;
    cin>>t;
    
    map<char, pii> derction ={
        {'N', {0, 1}},  
        {'E', {1, 0}},  
        {'S', {0, -1}}, 
        {'W', {-1, 0}}  
    };
    
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        
        int x = 0, y = 0; 
        bool F1 = false;
        
        for (int i = 0; i <1000; i++){ 
            for (char u : s) {
                x += derction[u].F;
                y += derction[u].S;
                
                if(x==a &&y==b){
                    F1 = true;
                    break;
                }
            }
            if(F1) break;
            
            int cy_dx = 0, cy_dy = 0;
            for (char u : s) {
                cy_dx += derction[u].F;
                cy_dy += derction[u].S;
            }
            if (cy_dx==0 &&cy_dy==0) {
                break;
            }
        }
        
        cout << (F1 ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
