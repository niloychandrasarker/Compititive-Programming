#include <stdio.h>

int main() {
    int count = 0, sum = 0;

    for (int i = 100; i <= 200; i++) {
        if (i % 9 == 0) {
            count++;
            sum += i;
        }
    }

    printf("Number of integers between 100 and 200 divisible by 9: %d\n", count);
    printf("Sum of those integers: %d\n", sum);

    return 0;
}
