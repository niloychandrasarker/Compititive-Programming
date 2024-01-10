#include <iostream>

int main() {
    // Read input
    int N;
    std::cin >> N;

    // Calculate the N-th number that can be expressed as the sum of exactly three repunits
    long long result = 0;
    for (int i = 0; i < N; ++i) {
        result = result * 10 + 3;
    }

    // Print the answer
    std::cout << result << std::endl;

    return 0;
}
