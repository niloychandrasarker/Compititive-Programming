#include <iostream>
 
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
 
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
 
        int minimum = min(a, min(b, c));
        bool position = true;
        int count = 0;
 
        if (a % minimum != 0 || b % minimum != 0 || c % minimum != 0) {
            position = false;
        }
 
        while (a != minimum) {
            if (a % minimum != 0 || count > 3) {
                position = false;
                break;
            }
            a -= minimum;
            count++;
        }
 
        while (b != minimum) {
            if (b % minimum != 0 || count > 3) {
                position = false;
                break;
            }
            b -= minimum;
            count++;
        }
 
        while (c != minimum) {
            if (c % minimum != 0 || count > 3) {
                position = false;
                break;
            }
            c -= minimum;
            count++;
        }
 
        if (count > 3) {
            position = false;
        }
 
        if (position) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
