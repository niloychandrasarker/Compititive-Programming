#include<bits/stdc++.h>
using namespace std;
int main()
{
     int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        int result = __gcd(X, Y);

        cout << result << endl;
    }

    return 0;
}