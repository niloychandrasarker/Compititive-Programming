#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, m;
        cin >> n >> k >> m;

        string s;
        cin >> s;

        vector<int> char_count(26, 0);
        int b = 0;
        string ss = "";

        for (char i : s) {
            char_count[i - 'a']++;

            if (all_of(char_count.begin(), char_count.begin() + k, [](int count) { return count > 0; })) {
                fill(char_count.begin(), char_count.end(), 0);
                b++;
                ss += i;
            }
        }

        if (b >= n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
            b = n - b;
            char z = 'a' + find(char_count.begin(), char_count.end(), 0) - char_count.begin();
            cout << ss << string(b, z) << '\n';
        }
    }

    return 0;
}
