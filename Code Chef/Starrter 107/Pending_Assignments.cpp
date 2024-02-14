#include<bits/stdc++.h>
using namespace std;
int main()
{
     int T;
    cin >> T;

    while (T--) 
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int total_time_required = X * Y;

        if (total_time_required <= Z * 24 * 60) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}