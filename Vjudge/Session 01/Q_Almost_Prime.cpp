#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
    cin >> n;

    vector<int> prime_factors(n + 1, 0);

    for (int i = 2; i <= n; i++) 
    {
        if (prime_factors[i] == 0) 
        {
            for (int j = i; j <= n; j += i) 
            {
                prime_factors[j]++;
            }
        }
    }

    int almost_prime_count = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (prime_factors[i] == 2)
        {
            almost_prime_count++;
        }
    }

    cout << almost_prime_count << endl;

    return 0;
}