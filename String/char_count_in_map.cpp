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
    string str = "Example UPPERCASE Letters";

    map<char, int> uppercaseCount;

    for (char c : str) {
        if (c >= 'A' && c <= 'Z') { // Check if the character is uppercase
            uppercaseCount[c]++;
        }
    }

    // Print the count
    for (const auto &pair : uppercaseCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

