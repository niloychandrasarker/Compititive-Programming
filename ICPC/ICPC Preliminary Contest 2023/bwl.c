#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n;
    char x[105];  

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", x);
        double over = 0.0;
        int run = 0, w = 0;
        int l = strlen(x);

        for (int j = 0; j < l; j++) {
            if (x[j] == 'w' || x[j] == 'W') {
                w++;
            } else if (x[j] >= '0' && x[j] <= '9') {
                run += (x[j] - '0');
            }
        }

        over = l * 0.1;
        if (over > 0.5) {
            over += 0.4;
        }

        if (over <= 1 && run <= 1 && w <= 1) {
            printf("%.1f Over %d Run %d Wicket.\n", over, run, w);
        } else if (over <= 1 && run <= 1 && w > 1) {
            printf("%.1f Over %d Run %d Wickets.\n", over, run, w);
        } else if (over <= 1 && run > 1 && w <= 1) {
            printf("%.1f Over %d Runs %d Wicket.\n", over, run, w);
        } else if (over > 1 && run <= 1 && w <= 1) {
            printf("%.1f Overs %d Run %d Wicket.\n", over, run, w);
        } else if (over > 1 && run <= 1 && w > 1) {
            printf("%.1f Overs %d Run %d Wickets.\n", over, run, w);
        } else if (over > 1 && run > 1 && w <= 1) {
            printf("%.1f Overs %d Runs %d Wicket.\n", over, run, w);
        } else if (over > 1 && run > 1 && w > 1) {
            printf("%.1f Overs %d Runs %d Wickets.\n", over, run, w);
        }
    }

    return 0;
}