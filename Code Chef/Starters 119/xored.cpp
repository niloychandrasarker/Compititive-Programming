#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++) {
            int x = 0;
            int y = a[i];

            for (int j = i; j < n; j++) {
                x ^= a[j];
                y &= a[j];

                if (x == y) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
