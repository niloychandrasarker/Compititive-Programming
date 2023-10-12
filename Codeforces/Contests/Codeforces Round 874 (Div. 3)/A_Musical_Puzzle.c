#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char s[51];
        scanf("%s", s);
        int count = 0;
        for (int i = 0; i < n-1; i++) {
            if (s[i] != s[i+1]) {
                count++;
                i++;
            }
        }
        printf("%d\n", (count+1)/2);
    }
    return 0;
}