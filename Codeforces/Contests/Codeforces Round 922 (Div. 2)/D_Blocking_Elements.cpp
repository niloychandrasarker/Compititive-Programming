#include <iostream>
using namespace std;
#define int long long

int solveHelper(int a, int b, int c, int i, int ans, int cnt, int mn) {
    if (i < 0) {
        return min(ans, mn);
    }

    if (((b >> i) & 1) == 0 && ((a >> i) & 1) == 1 && cnt + (1LL << i) <= c) {
        if (ans >= 2 * (1LL << i)) {
            cnt += (1LL << i);
            ans -= 2 * (1LL << i);
        } else {
            mn = min(mn, 2 * (1LL << i) - ans);
        }
    }

    return solveHelper(a, b, c, i - 1, ans, cnt, mn);
}

int solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b) {
        swap(a, b);
    }

    int ans = a - b, cnt = 0, mn = ans;

    return solveHelper(a, b, c, 60, ans, cnt, mn);
}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << "\n";
    }

    return 0;
}
