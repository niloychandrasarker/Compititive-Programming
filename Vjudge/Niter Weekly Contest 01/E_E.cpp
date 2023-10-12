#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "codeforces";
    int t;
    cin >> t;
    
    while (t--) 
    {
        char c;
        cin >> c;
     
        bool found = false;
        for (char ch : s) 
        {
            if (ch == c) 
            {
                found = true;
                break;
            }
        }
        
        if (found) 
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