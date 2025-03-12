#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

class Solution {
public:
    // Helper DFS function to perform flood fill
    void dfs(int i, int j, int initialColor, int newColor, vector<vector<int>>& image) {
        int n = image.size();    // number of rows
        int m = image[0].size(); // number of columns

        // Check if the current coordinates are out of bounds
        if (i < 0 || j < 0 || i >= n || j >= m) return;

        // If the current pixel is not the initial color, stop the DFS
        if (image[i][j] != initialColor) return;

        // Change the color of the current pixel to the new color
        image[i][j] = newColor;

        // Recursively perform DFS in four directions (up, down, left, right)
        dfs(i - 1, j, initialColor, newColor, image); // up
        dfs(i + 1, j, initialColor, newColor, image); // down
        dfs(i, j - 1, initialColor, newColor, image); // left
        dfs(i, j + 1, initialColor, newColor, image); // right
    }

    // Main flood fill function
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // Check if the image is empty or if the starting point is valid
        if (image.empty() || image[0].empty()) return image;

        int initialColor = image[sr][sc]; // Color of the starting pixel
        
        // Start DFS only if the new color is different from the initial color
        if (initialColor != color) {
            dfs(sr, sc, initialColor, color, image);
        }

        return image; // Return the updated image
    }
};

void intcode(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
}

int main() {
	intcode();
    Solution sol;
    vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    int sr = 1, sc = 1, color = 2;

    // Call the floodFill function and store the result
    vector<vector<int>> result = sol.floodFill(image, sr, sc, color);

    // Output the result using cout
    for (const auto& row : result) {
        for (const auto& pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }

    return 0;
}