#include<bits/stdc++.h>
using namespace std;

void processKeyPresses(string& input) 
{
    int lowerCount = 0, upperCount = 0;

    for (int i = input.size() - 1; i >= 0; i--) 
    {
        if (input[i] == 'b') 
        {
            lowerCount++;
            input[i] = '0';
        } 
        else if (input[i] == 'B') 
        {
            upperCount++;
            input[i] = '0';
        }

        if (lowerCount && input[i] >= 'a' && input[i] != '0') 
        {
            input[i] = '0';
            lowerCount--;
        } 
        else if (upperCount && input[i] <= 'Z' && input[i] != '0') 
        {
            input[i] = '0';
            upperCount--;
        }
    }
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        string str;
        cin >> str;

        processKeyPresses(str);

        for (char c : str) 
        {
            if (c != '0') 
            {
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}
