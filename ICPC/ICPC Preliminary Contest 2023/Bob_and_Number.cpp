#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long n, A, N, sum = 0;
    
    cin >> n;
    for(int j = 1; j <= n; j++) {
        cin >> A >> N;
    for(int i = 1; i <= N; i++) {
        sum += abs((i % A) - i % (A - 1));
        
    }

    cout << "Case " << j << ": " << sum << endl;
    sum = 0;
    }
    return 0;
}