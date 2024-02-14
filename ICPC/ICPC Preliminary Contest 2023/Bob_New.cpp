#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int A;
        long long N;
        cin >> A >> N;

        long long ans;

        if (A == 2) {
            ans = N;
        } else {
            long long fullCycles = N / (A - 1);
            ans = fullCycles * A;

            long long remainingValues = N % (A - 1);
            if (remainingValues == 0) 
            {
                ans -= A - 1;
            } 
            else 
            {
                ans += remainingValues - 1;
            }
        }

        cout << "Case " << caseNum << ": " << ans << endl;
    }

    return 0;
}
