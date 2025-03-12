#include <iostream>
using namespace std;

void intcode(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
}

int main() {
	intcode();
    int dx[] = {+1, -1, 0, 0}; // Down, Up, Right, Left
    int dy[] = {0, 0, +1, -1};

    int x = 1, y = 1; // Starting from cell (1,1)
    
    cout << "Starting at (" << x << ", " << y << ")\n";
    cout << "Neighbors are:\n";

    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        cout << "(" << newX << ", " << newY << ")\n";
    }

/* matrix to emon e hoy
(0,0) (0,1) (0,2)
(1,0) (1,1) (1,2)
(2,0) (2,1) (2,2)
*/
/*
Down: dx[0] = +1, dy[0] = 0

	*New position: (1 + 1, 1 + 0) = (2, 1)

Up: dx[1] = -1, dy[1] = 0

	*New position: (1 - 1, 1 + 0) = (0, 1)

Right: dx[2] = 0, dy[2] = +1

	*New position: (1 + 0, 1 + 1) = (1, 2)

Left: dx[3] = 0, dy[3] = -1

	*New position: (1 + 0, 1 - 1) = (1, 0)

*/

    return 0;
}
