#include <iostream>
#include <vector>

using namespace std;

void countSubarrays(int T, const vector<pair<int, vector<int>>>& testCases) {
    for (int t = 0; t < T; ++t) {
        int N = testCases[t].first;
        const vector<int>& P = testCases[t].second;

        vector<int> count(N + 1, 0);
        int currentSum = 0;

        for (int i = 0; i < N; ++i) {
            currentSum += P[i];
            if (currentSum <= N) {
                count[currentSum]++;
            }
            for (int j = 1; j <= i; ++j) {
                int s = currentSum - P[j - 1];
                if (s <= N) {
                    count[s]++;
                }
            }
        }

        for (int i = 1; i <= N; ++i) {
            cout << count[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    vector<pair<int, vector<int>>> testCases(T);
    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        vector<int> P(N);
        for (int i = 0; i < N; ++i) {
            cin >> P[i];
        }
        testCases[t] = make_pair(N, P);
    }

    countSubarrays(T, testCases);

    return 0;
}
