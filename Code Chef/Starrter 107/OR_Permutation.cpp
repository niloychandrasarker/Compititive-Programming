#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> permutation(N);

        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) {
                // Fill even positions with odd numbers
                permutation[i] = i + 1;
            } else {
                // Fill odd positions with even numbers
                permutation[i] = i - 1;
            }
        }

        // Print the generated permutation
        for (int i = 0; i < N; i++) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
