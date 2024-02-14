#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

const int MOD = 1e9 + 7;

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<long long> f_initial(n + 1, 0);
        vector<long long> x_count(n + 1, 0);

        for (int i = 1; i <= m; ++i) {
            int a, b, f;
            cin >> a >> b >> f;
            f_initial[a] += f;
            f_initial[b] += f;
        }

        for (int i = 1; i <= n; ++i) {
            x_count[i] = k;
        }

        long long total_excursions = (long long)n * k;
        long long expected_sum = 0;

        for (int i = 1; i <= n; ++i) {
            long long expected_value = (f_initial[i] * x_count[i]) % MOD;
            expected_sum = (expected_sum + expected_value) % MOD;
        }

        long long inverse_total_excursions = mod_pow(total_excursions, MOD - 2, MOD);
        long long result = (expected_sum * inverse_total_excursions) % MOD;

        cout << result << endl;
    }

    return 0;
}
