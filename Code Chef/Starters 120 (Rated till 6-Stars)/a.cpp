#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> nearest_smaller_position(int n, const vector<int>& array) {
    stack<pair<int, int>> st;
    vector<int> result(n, 0);

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && st.top().first >= array[i]) {
            st.pop();
        }

        if (!st.empty()) {
            result[i] = st.top().second + 1;
        }

        st.push({array[i], i});
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    vector<int> result = nearest_smaller_position(n, array);

    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
