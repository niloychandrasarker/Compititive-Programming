#include <iostream>
#include <vector>
#include <map>
using namespace std;

const int MAX_N = 1000005;

bool is_prime[MAX_N];

void sieve() {
    fill(is_prime, is_prime + MAX_N, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX_N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX_N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    sieve(); // Precompute primes using sieve of Eratosthenes

    for (int caseNo = 1; caseNo <= T; caseNo++) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int left = 0;
        int maxSubarrayLength = 0;
        map<int, int> factorCount;

        for (int right = 0; right < N; right++) {
            int x = A[right];
            for (int p = 2; p <= x; p++) {
                if (is_prime[p] && x % p == 0) {
                    factorCount[p]++;
                }
                while (x % p == 0) {
                    x /= p;
                }
                if (x == 1) {
                    break;
                }
            }

            if (factorCount.size() == K) {
                maxSubarrayLength = max(maxSubarrayLength, right - left + 1);
            }

            while (factorCount.size() > K) {
                int leftFactor = A[left];
                for (int p = 2; p <= leftFactor; p++) {
                    if (is_prime[p] && leftFactor % p == 0) {
                        factorCount[p]--;
                    }
                    while (leftFactor % p == 0) {
                        leftFactor /= p;
                    }
                    if (leftFactor == 1) {
                        break;
                    }
                }
                if (factorCount[leftFactor] == 0) {
                    factorCount.erase(leftFactor);
                }
                left++;
            }
        }

        cout << "Case " << caseNo << ": " << maxSubarrayLength << endl;
    }

    return 0;
}
