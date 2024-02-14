#include<bits/stdc++.h>
using namespace std;

int countForks(int a, int b, int xK, int yK, int xQ, int yQ) 
{

    int count = 0;
    for (int i = -1; i <= 1; i += 2) 
    {
        for (int j = -1; j <= 1; j += 2) 
        {
            int x1 = xK + a * i;
            int y1 = yK + b * j;

            int x2 = xK + b * i;
            int y2 = yK + a * j;

        
            if (x1 >= 0 && y1 >= 0 && x1 != xQ && y1 != yQ)
                count++;
            if (x2 >= 0 && y2 >= 0 && x2 != xQ && y2 != yQ)
                count++;
        }
    }

    return count;
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int a, b, xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;

        int forks = countForks(a, b, xK, yK, xQ, yQ);
        cout << forks << endl;
    }

    return 0;
}