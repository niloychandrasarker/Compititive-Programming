#include <stdio.h>
#include <string.h>

int main() {
    char S[200001];
    scanf("%s", S);

    while (strstr(S, "ABC") != NULL) 
    {
        char* pos = strstr(S, "ABC");
        memmove(pos, pos + 3, strlen(pos + 3) + 1);
    }

    printf("%s\n", S);

    return 0;
}