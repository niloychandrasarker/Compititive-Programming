#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int a[n];
        int minR = INT_MAX;
        bool flag = false;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];

            if (a[i] >= k) {
                flag = true;
                minR = min(minR, a[i] % k);
            }
        }

        if (flag) {
            cout << minR << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}