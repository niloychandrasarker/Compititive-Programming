#include<bits/stdc++.h>
using namespace std;
int main()
{
     int T;
    scanf("%d", &T);

    while (T--) {
        int r[5];
        int lc = 0;

        for (int i = 0; i < 5; ++i) {
            scanf("%d", &r[i]);
            lc += r[i];
        }

        if (lc >= 4) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}