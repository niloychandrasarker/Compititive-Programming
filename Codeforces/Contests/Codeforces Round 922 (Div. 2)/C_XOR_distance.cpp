#include <bits/stdc++.h>
using namespace std;
#define int long long

int a, b, c;

signed main() {
    int t; 
    cin >> t;

    while (t--) {
        cin >> a >> b >> c;

        if (a < b) 
            swap(a, b);

        int ans = a - b, cnt = 0, mn = ans;

        for (int i = 60; i >= 0; i--) {
            bool bit_b = (b >> i) & 1;
            bool bit_a = (a >> i) & 1;

            if (!bit_b && bit_a && cnt + (1ll << i) <= c) {
                if (ans >= 2 * (1ll << i)) {
                    cnt += (1ll << i);
                    ans -= 2 * (1ll << i);
                } else {
                    mn = min(mn, 2 * (1ll << i) - ans);
                }
            }
        }

        cout << min(ans, mn) << "\n";
    }

    return 0;
}
