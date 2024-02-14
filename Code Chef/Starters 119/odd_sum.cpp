#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        bool f = true;
        vector<int> a;

        for (int i = 0; i < k + 1; i++) {
            a.push_back(f ? 1 : 0);
            f = !f;
        }

        vector<int> e, o;
        for (int i = 1; i <= n; i++) {
            (i % 2 == 0 ? e : o).push_back(i);
        }

        vector<int> t;
        for (int i = 0; i < a.size(); i++) {
            t.push_back((a[i] == 0 ? e : o).back());
            (a[i] == 0 ? e : o).pop_back();
        }

        for (int i = 0; i < t.size(); i++) {
            if (t[i] % 2 == 0) {
                while (!e.empty()) {
                    cout << e.back() << " ";
                    e.pop_back();
                }
                cout << t[i] << " ";
            } else {
                while (!o.empty()) {
                    cout << o.back() << " ";
                    o.pop_back();
                }
                cout << t[i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
