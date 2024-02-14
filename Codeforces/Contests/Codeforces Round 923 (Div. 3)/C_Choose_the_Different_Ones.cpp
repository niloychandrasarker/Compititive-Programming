#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> arr1(n), arr2(m);
        for (int i = 0; i < n; i++) cin >> arr1[i];
        for (int j = 0; j < m; j++) cin >> arr2[j];

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        auto v_element = [](const vector<int>& arr, int limit) {
            set<int> st;
            for (int x : arr) {
                if (x <= limit) st.insert(x);
            }
            return st;
        };

        set<int> st1 = v_element(arr1, k);
        set<int> st2 = v_element(arr2, k);

        bool possible = (st1.size() >= k / 2) && (st2.size() >= k / 2);

        for (int i = 1; i <= k && possible; i++) {
            if (st1.count(i) == 0 && st2.count(i) == 0) {
                possible = false;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
