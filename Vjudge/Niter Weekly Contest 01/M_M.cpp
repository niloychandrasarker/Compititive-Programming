#include<bits/stdc++.h>
using namespace std;
int main()
{
     string S;
    cin >> S;

   
    string valid_strings[] = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};

    bool found = false;

   
    for (int i = 0; i < 7; i++) 
    {
        if (S == valid_strings[i]) 
        {
            found = true;
            break;
        }
    }

    if (found) 
    {
        cout << "Yes" << endl;
    } 
    else 
    {
        cout << "No" << endl;
    }
    return 0;
}