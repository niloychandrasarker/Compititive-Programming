#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<char> result(n);
        int x = 1;
        
        cout << "? " << 1 << endl;
        cout.flush();
        char response;
        cin >> response;
        
        if (response == '=') {
            x = 1;
        } else if (response == '>') {
            x = 2;
        } else {
            x = n;
        }
        
        for (int i = 2; i <= n; i++) {
            cout << "? " << i << endl;
            cout.flush();
            cin >> response;
            
            if (response == '=') {
                x = i;
                break;
            } else if (response == '>') {
                x++;
            }
        }

        // Determine the permutation
        result[x - 1] = '=';
        int low = 1, high = n;
        for (int i = 0; i < n; i++) {
            if (i != x - 1) {
                cout << "? " << i + 1 << endl;
                cout.flush();
                cin >> response;
                
                if (response == '<') {
                    result[i] = '<';
                    low++;
                } else {
                    result[i] = '>';
                    high--;
                }
            }
        }

        // Output the determined permutation
        for (char c : result) {
            cout << c;
        }
        cout << endl;
        cout.flush();
    }

    return 0;
}
