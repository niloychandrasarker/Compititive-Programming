#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int firstB = find(s.begin(), s.end(), 'B') - s.begin();
        int lastB = find(s.rbegin(), s.rend(), 'B') - s.rbegin();

        if (firstB == n) {
            cout << 0 << endl;
        } else {
            cout << n - firstB - lastB << endl;
        }
    }
    return 0;
}