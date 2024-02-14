#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
 int points = 0;
    while (t--) {
        int points = 0;
        char grid[10][10];

        // Read the 10x10 grid
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
            }
        }

        // Iterate through the grid to count points
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                   
                    points += grid[i][j];
                }
            }
        }

        cout << points << endl;
    }

    return 0;
}
