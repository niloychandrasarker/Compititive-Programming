#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    const int N = 80;
    vector<string> ans(N, "v");

    while (t--) {
        int n;
        cin >> n;

        for (char a = 'a'; a <= 'z'; a++) {
            for (char b = 'a'; b <= 'z'; b++) {
                for (char c = 'a'; c <= 'z'; c++) {
                    string rs = {a, b, c};
                    int val = int(a) + int(b) + int(c) - 3 * int('a');
                    ans[val] = (ans[val] == "v" ? rs : ans[val]);
                }
            }
        }

        cout << ans[n - 3] << "\n";
    }
    return 0;
}