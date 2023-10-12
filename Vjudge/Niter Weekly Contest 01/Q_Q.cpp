#include<bits/stdc++.h>
using namespace std;
int main()
{
     int X, Y;
    cin >> X >> Y;
    cout << X - (Y % X) << endl;
    return 0;
}