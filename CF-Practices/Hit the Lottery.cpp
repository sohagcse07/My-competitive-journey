#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
void intcode(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}

const int mx = 1e5+123;

int dp[mx];

// Recursive function with memoization
int minBills(int n,  const vector<int>& dim) {
    // Base case: If the amount is 0, no bills are needed
    if (n == 0) return 0;

    // If the result has already been computed, return it
    if (dp[n] != -1) return dp[n];

    int min_bills = INT_MAX;

    // Try every denomination and recursively compute the minimum bills needed
    for (auto u : dim) {
        if (n >= u) {
            int bills = minBills(n - u, dim);
            if (bills != INT_MAX) { // Ensure that bills was valid
                min_bills = min(min_bills, bills + 1);
            }
        }
    }

    // Memoize the result
    return dp[n] = min_bills;
}

int main() {
    intcode();

    int n;
    cin >> n;  

    // List of denominations
    vector<int> price = {100, 20, 10, 5, 1};

    int bill = 0;

    for(auto u:price){

        bill += n/u; // 125/100 = +1 // 25/20 = +1 

        n %= u; // 125 % 100 = 25 then check 25%20 = 5 and so..on
    }

    cout<<bill<<endl;

    return 0;
}
