#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int D[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> D[i];
    }

    int repdigitCount = 0;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= D[i - 1]; ++j) {
            int month = i;
            int day = j;

            while (month > 0) {
                if (month % 10 == day % 10) {
                    ++repdigitCount;
                    break;
                }
                month /= 10;
            }
        }
    }

    std::cout << repdigitCount << std::endl;

    return 0;
}
