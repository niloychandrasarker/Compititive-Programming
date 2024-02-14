#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> ar(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> ar[i];
        }

        vector<int> v;
        map<int, int> mp;

        for (int i = 0; i < 2 * n; ++i) {
            if (mp.find(ar[i]) != mp.end()) {
                v.push_back(ar[i]);
                mp.erase(ar[i]);
            } else {
                mp[ar[i]] = i;
            }
        }

     
        reverse(v.begin(), v.end());

        for (int i = 0; i < n; ++i) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
