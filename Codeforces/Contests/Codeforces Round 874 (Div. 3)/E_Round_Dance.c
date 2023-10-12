#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int min_round_dances = 0;
        int max_round_dances = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == (i+2)%n || a[(i+1)%n] == (i+2)%n) {
                min_round_dances++;
            }
            if (a[i] == (i+1)%n || a[(i+2)%n] == (i+1)%n) {
                max_round_dances++;
            }
        }
        max_round_dances = (max_round_dances+1)/2;
        printf("%d %d\n", min_round_dances, max_round_dances);
    }
    return 0;
}