#include <bits/stdc++.h>
using namespace std;
int p_bonacci(int N, int P);

int main() {
    int N, P;
    
cin >> N >> P;
    
    int result = p_bonacci(N, P);
    
    printf("The %d-bonacci number for N = %d and P = %d is: %d\n", P, N, P, result);
    
    return 0;
}

int p_bonacci(int N, int P) {
    if (N < P) {
        return N;
    }
    
    int ans = 0;
    for (int i = 1; i <= P; i++) {
        ans += p_bonacci(N - i, P);
    }
    
    return ans;
}