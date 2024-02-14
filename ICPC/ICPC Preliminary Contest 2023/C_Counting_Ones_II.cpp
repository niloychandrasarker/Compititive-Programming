#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int case_num = 1; case_num <= T; ++case_num) {
        int N, K, Q;
        cin >> N >> K;
        vector<string> matrix(N);
        for (int i = 0; i < N; ++i) {
            cin >> matrix[i];
        }
        cin >> Q;
        vector<pair<int, int>> queries(Q);
        for (int i = 0; i < Q; ++i) {
            cin >> queries[i].first >> queries[i].second;
        }

        // Calculate and print the results for this test case
        cout << "Case " << case_num << ":\n";
        for (int i = 0; i < Q; ++i) {
            int L = queries[i].first;
            int R = queries[i].second;
            int ones_in_range = 0;
            for (int j = L; j <= R; ++j) {
                int row = j / (N * K);
                int col = (j % (N * K)) / K;
                if (matrix[row][col] == '1') {
                    ones_in_range++;
                }
            }
            cout << ones_in_range << endl;
        }
    }

    return 0;
}
