#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int x = 0;
        for (int i = 29; i >= 0; i--) {
            int bit_a = (a >> i) & 1;
            int bit_b = (b >> i) & 1;

            if (bit_a == bit_b) {
                x |= (bit_a << i);
            } else {
                break; // Stop when you find the first differing bit
            }
        }

        cout << x << endl;
    }
    return 0;
}
