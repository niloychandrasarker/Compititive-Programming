#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    while (tt--) {
        int n, q;
        cin >> n;

        vector<int> a(n), v(n);
        for (int &i : a)
            cin >> i;

        v[n - 1] = n;
        for (int i = n - 2; i >= 0; i--)
            v[i] = (a[i] == a[i + 1] ? v[i + 1] : i + 1);

        cin >> q;

        while (q--) {
            int l, r;
            cin >> l >> r;
            --l;
            --r;

            if (v[l] > r) {
                cout << -1 << ' ' << -1 << '\n';
            } else {
                cout << l + 1 << ' ' << 1 + v[l] << '\n';
            }
        }
    }

    return 0;
}
