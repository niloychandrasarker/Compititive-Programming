#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        string s = "";
        char c = 'a';
        for (int i = 0; i < k; ++i)
        {
            s += c;
            c = (c == 'z') ? 'a' : c + 1;
        }

        for (int i = 0; i < n; ++i)
        {
            cout << s;
        }

        cout << '\n';
    }

    return 0;
}