#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--) {
        int N, Q;
        cin >> N >> Q;

        string S;
        cin >> S;

        vector<int> A(Q + 1);
        A[0] = 1;

        int len = 1;
        char ch = S[0];

        for (int i = 1; i < N; ++i) {
            if (S[i] == ch) {
                len++;
            } else {
                len = 1;
                ch = S[i];
            }

            A[0] = max(A[0], len);
        }

        for (int i = 1; i <= Q; ++i) {
            char c;
            cin >> c;

            if (c == ch) {
                len++;
            } else {
                len = 1;
                ch = c;
            }

            A[i] = max(A[i - 1], len);
        }

        for (int i = 0; i <= Q; ++i) {
            cout << A[i] << ' ';
        }

        cout << endl;
    }
    return 0;
}