#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int countInterestingSequences(string P, string Q) {
    int n = P.size();
    int m = Q.size();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    vector<int> lastOccurrence(26, -1);

    dp[0][0] = 1;

    for (int i = 0; i < m; i++) {
        lastOccurrence[Q[i] - 'a'] = i;
    }

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i > 0) {
                dp[i][j] = dp[i - 1][j];
                int c = Q[i - 1] - 'a';
                if (j > 0 && lastOccurrence[c] < i - 1) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
                }
            }
        }
    }

    int totalInterestingSequences = 0;
    for (int j = 1; j <= n; j++) {
        totalInterestingSequences = (totalInterestingSequences + dp[m][j]) % MOD;
    }

    return totalInterestingSequences;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string P, Q;
        cin >> P >> Q;
        int result = countInterestingSequences(P, Q);
        cout << result << endl;
    }

    return 0;
}
