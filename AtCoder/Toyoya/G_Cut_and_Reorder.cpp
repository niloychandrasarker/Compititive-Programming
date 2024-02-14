#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    // Sort A and B
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // Calculate the cost to make A and B equal
    long long cost = 0;
    for (int i = 0; i < N; ++i) {
        cost += abs(A[i] - B[i]);
    }

    // Find the minimum cost by considering all possible splits
    long long min_cost = cost;
    for (int i = 1; i < N; ++i) {
        // Calculate the cost of splitting A and rearranging
        long long split_cost = accumulate(A.begin() + i, A.end(), 0LL) - accumulate(A.begin(), A.begin() + i, 0LL);
        split_cost += 1LL * i * C;

        // Calculate the new cost after splitting
        long long new_cost = cost + split_cost;

        // Update the minimum cost
        min_cost = min(min_cost, new_cost);
    }

    cout << min_cost << endl;

    return 0;
}
