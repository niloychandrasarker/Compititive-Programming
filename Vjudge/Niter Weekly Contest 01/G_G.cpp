#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin >> t;

    while (t--) 
    {
        string s;
        cin >> s;
        
        string codeforces = "codeforces";
        int diff_count = 0;
        
        for (int i = 0; i < 10; i++) 
        {
            if (s[i] != codeforces[i]) 
            {
                diff_count++;
            }
        }
        
        cout << diff_count << endl;
    }
    return 0;
}