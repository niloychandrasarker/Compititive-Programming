#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int x, y;
        cin >> x >> y;

        if (x > y) {
            if (x - y >= 2) {
                cout << 0 << endl;
            } else {
                cout << 1 << endl;
            }
        } else if (x == y) {
            cout << 0 << endl;
        } else {
            cout << y / (x - 1) << endl;
        }
    }

    return 0;
}
