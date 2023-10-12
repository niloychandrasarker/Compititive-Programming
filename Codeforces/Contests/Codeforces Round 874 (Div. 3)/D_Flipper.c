#include <stdio.h>

int main() {
    int t, n, p[2000];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &p[i]);
        }
        int l = n - 1;
        while (l > 0 && p[l - 1] >= p[l]) {
            l--;
        }
        if (l == 0) {
            // the permutation is already sorted in descending order
            for (int i = n - 1; i >= 0; i--) {
                printf("%d ", p[i]);
            }
        } else {
            int r = n - 1;
            while (p[r] <= p[l - 1]) {
                r--;
            }
            // swap p[l-1] and p[r]
            int tmp = p[l - 1];
            p[l - 1] = p[r];
            p[r] = tmp;
            // reverse the segment p[l,r]
            for (int i = l, j = n - 1; i < j; i++, j--) {
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
            for (int i = 0; i < n; i++) {
                printf("%d ", p[i]);
            }
        }
        printf("\n");
    }
    return 0;
}