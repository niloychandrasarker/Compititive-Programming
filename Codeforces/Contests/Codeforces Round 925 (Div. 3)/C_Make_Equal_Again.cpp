#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
    cin.tie(0);

    int tt = 1;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<int>v(n);

        for (int i = 0; i < n; i++) {
            cin >>v[i];
        }

        int cnt = 0, cnt1 = n - 1;

        for (; cnt < n &&v[cnt] ==v[0]; ++cnt);
        for (; cnt1 >= 0 &&v[cnt1] ==v[n - 1]; --cnt1);

        if (n == 1) {
            cout << 0 << "\n";
            continue;
        }
        

        if (v.front() !=v.back()) {
            int c = n - cnt;
            int d = cnt1 + 1;

            cout << min(c, d) << "\n";
            continue;
        }

        cout << max(0, cnt1 - cnt + 1) << "\n";
    }

    return 0;
}