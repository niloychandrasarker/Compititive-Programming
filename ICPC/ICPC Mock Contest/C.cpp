#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++) 
    {
        int n, a, b;
        cin >> n;
        cin >> a >> b;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        long long count = 0;

        for (int i = 0; i < n; i++)
         {
            int low = a - arr[i];
            int high = b - arr[i];

            int low_index = lower_bound(arr.begin(), arr.end(), low) - arr.begin();
            int high_index = upper_bound(arr.begin(), arr.end(), high) - arr.begin();

            if (high_index > low_index) 
            {
                count += (high_index - low_index);
            }

            if (a <= 2 * arr[i] && 2 * arr[i] <= b) 
            {
                count--;
            }
        }

        cout << "Case " << k << ": " << count / 2 << endl;
    }

    return 0;
}
