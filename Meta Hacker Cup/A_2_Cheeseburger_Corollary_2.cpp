#include <iostream>
#include <algorithm>

using namespace std;

// Function to calculate the largest possible K for building a K-decker cheeseburger
long long largestPossibleK(long long A, long long B, long long C) {
    long long result = 0;
    long long cost = 0;
    long long maxK = min(C / A, C / (2 * B)); // Maximum K based on individual cheeseburgers

    // Binary search for the largest possible K
    long long left = 1, right = maxK;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        cost = mid * A + (mid / 2) * B;

        if (cost <= C) { 
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result ; // Multiply by 2 since each K-decker needs 2 cheeseburgers
}

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; ++i) {
        long long A, B, C;
        cin >> A >> B >> C;
        long long result = largestPossibleK(A, B, C);
        cout << "Case #" << i << ": " << result << endl;
    }

    return 0;
}
