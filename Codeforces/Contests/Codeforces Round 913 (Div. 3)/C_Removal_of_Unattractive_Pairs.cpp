#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t; 

    for (int k = 0; k < t; k++) 
    {
        int n;
        cin >> n; 

        string s;
        cin >> s; 

        int length = 0;

        for (int i = 1; i < n; i++) 
        {
            if (s[i] = s[i - 1]) 
            {
                length += 2; 
                i++; 
            }
        }

        cout << n - length << endl; 
    }

    return 0;
}