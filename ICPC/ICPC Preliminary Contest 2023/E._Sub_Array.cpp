#include<bits/stdc++.h>
using namespace std;


long long SubArray(const vector<int>& arr) {
    int n = arr.size();
    long long result = 0;
    int i = 0;

    while (i < n) {
        int count = 1;
        while (i + 1 < n && arr[i] == arr[i + 1]) {
            i++;
            count++;
        }

        result += static_cast<long long>(count) * (count + 1) / 2;
        i++;
    }

    return static_cast<long long>(n) * (n + 1) / 2 - result;
}

int main() {
    int t;
    cin >> t;

    for (int caseNum = 1; caseNum <= t; caseNum++) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long result = SubArray(arr);
        cout << "Case " << caseNum << ": " << result << endl;
    }

    return 0;
}
