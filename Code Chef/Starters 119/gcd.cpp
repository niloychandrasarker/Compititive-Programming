#include<bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int x, q;
        cin >> x >> q;

        map<int, int> m;

        while (x % 2 == 0) {
            m[2]++;
            x = x / 2;
        }

        for (int i = 3; i <= sqrt(x); i += 2) {
            while (x % i == 0) {
                m[i]++;
                x = x / i;
            }
        }

        if (x > 2) {
            m[x]++;
        }

        for (int i = 0; i < q; ++i) {
            int p;
            cin >> p;

            int r = 1;

            for (const auto& k : m) {
                if (k.second % p == 0 && p > 1) {
                    r = (2 * r) % MOD;
                }
            }

            cout << r << endl;
        }
    }

    return 0;
}
