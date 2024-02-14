#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> c(n);
        long long t = 0;

        for (int i = 0; i < n; i++) {
            cin >> c[i];
            t += c[i];
        }

        if (t % n != 0) {
            cout << "NO\n";
        } 
        else {
            long long tt = t / n;
            bool p = true;

            for (int i = 0; i < n; i++) {
                if (c[i] > tt) {
                    long long o = c[i] - tt;
                    c[i] -= o;
                    c[i + 1] += o;
                } 
                else if (c[i] < tt) {
                    p = false;
                    break;
                }
            }

            cout << (p ? "YES" : "NO") << "\n";
        }
    }
    return 0;
}