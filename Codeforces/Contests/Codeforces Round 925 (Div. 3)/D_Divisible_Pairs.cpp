#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int pair = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((a[i] + a[j]) % x == 0 && (a[i] - a[j]) % y == 0) {
                    pair++;
                }
            }
        }

        cout << pair << "\n";
    }
    return 0;
}