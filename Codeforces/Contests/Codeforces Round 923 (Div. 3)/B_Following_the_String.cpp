#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }


        map<int, int> freq;
        string ans = "";

        for (int j = 0; j < n; ++j) {
            freq[a[j]]++;
            ans += static_cast<char>('a' + freq[a[j]] - 1);
        }

        cout << ans << endl;
    }
    return 0;
}