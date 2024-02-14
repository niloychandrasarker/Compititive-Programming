#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    while (tt--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        vector<int> a(k);
        a[0] = n; 
        a[1] = 1;

        for (int i = 0; i < k; i++) {
            int s = (i % 2 == 0 ? -1 : 1);
            int move = 0;
            int mn = n + 1, mx = 0;

            for (int j = i; j < n; j += k) {
                v[j] = a[i] + s * move++;
                mx = max(mx, v[j]);
                mn = min(mn, v[j]);
            }

            if (s == -1 && i + 2 < k) {
                a[i + 2] = mn - 1;
            }
            else if (s == 1 && i + 2 < k) {
                a[i + 2] = mx + 1;
            }
        }

        for (int &it : v) {
            cout << it << ' ';
        }
        cout << '\n';
    }

    return 0;
}