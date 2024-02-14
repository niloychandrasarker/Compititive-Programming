#include <iostream>
#include <cmath>

using namespace std;

const int MOD = 999999893;

int mod_inverse(int a, int m) {
    int m0 = m, x0 = 0, x1 = 1;
    while (a > 1) {
        int q = a / m;
        int temp = m;
        m = a % m, a = temp;
        int temp2 = x0;
        x0 = x1 - q * x0;
        x1 = temp2;
    }
    return x1 + m0 * (x1 < 0 ? 1 : 0);
}

int fractal_origami(int N) {
    if (N == 1) {
        return 0;
    }

    // Calculate modular inverse of sqrt(2)
    int inv_sqrt2 = mod_inverse(141421356, MOD);

    // Calculate the numerator: 2 * (1 - sqrt(2)^N)
    int numerator = (2 * (1 - static_cast<int>(pow(static_cast<double>(141421356), static_cast<double>(N), MOD)))) % MOD;

    // Calculate the denominator: 2 * sqrt(2) * (1 - sqrt(2))
    long long denominator = (2LL * 141421356 * (1 - 141421356)) % MOD;

    // Calculate the modular inverse of the denominator
    int inv_denominator = mod_inverse(denominator, MOD);

    // Calculate the final result (numerator * inv_denominator) % MOD
    int result = (1LL * numerator * inv_denominator) % MOD;

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        cout << fractal_origami(N) << endl;
    }

    return 0;
}
