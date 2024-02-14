#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;

        // Check if n is divisible by any odd number greater than 1
        bool hasOddDivisor = false;
        for (long long x = 3; x * x <= n; x += 2) {
            if (n % x == 0) {
                hasOddDivisor = true;
                break;
            }
        }

        if (n % 2 != 0) {
            // If n is odd, it's divisible by 1 and itself, which are both odd divisors.
            cout << "YES\n";
        } else if (hasOddDivisor) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}