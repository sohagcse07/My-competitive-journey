#include <iostream>
#include <string>
void intcode(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}

int main() {
    intcode();
    std::string str = "example";
    int count[26] = {0}; // Array to store count of characters (assuming only lowercase)

    for (char c : str) {
        if (c >= 'a' && c <= 'z') { // Ensure the character is lowercase
            count[c - 'a']++;
        }
    }

    // Print the count
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            std::cout << char('a' + i) << ": " << count[i] << std::endl;
        }
    }

    return 0;
}
