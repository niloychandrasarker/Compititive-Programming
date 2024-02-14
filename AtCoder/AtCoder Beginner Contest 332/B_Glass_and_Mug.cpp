#include <iostream>

int main() {
    int K, G, M;
    std::cin >> K >> G >> M;

    int glass = 0;
    int mug = 0;

    for (int i = 0; i < K; ++i) {
        if (glass == G) {
            // If the glass is filled, discard water
            glass = 0;
        } else if (mug == 0) {
            // If the mug is empty, fill the mug
            mug = M;
        } else {
            // Transfer water from the mug to the glass
            int transfer_amount = std::min(glass, M - mug);
            glass += transfer_amount;
            mug -= transfer_amount;
        }
    }

    std::cout << glass << " " << mug << std::endl;

    return 0;
}
