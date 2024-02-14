#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    // Read input values
    int N, Q;
    cin >> N >> Q;

    set<int> goodSet;
    vector<int> sequence;

    // Process each query
    for (int i = 0; i < Q; ++i) {
        int a, b, d;
        cin >> a >> b >> d;

        if (goodSet.count(a) || goodSet.count(b)) {
            // If either a or b is in the good set, add both to the good set
            goodSet.insert(a);
            goodSet.insert(b);
        } else {
            // If a and b are not in the good set, check if the difference d is zero
            if (d == 0) {
                // Add a, b, and i to the good set
                goodSet.insert(a);
                goodSet.insert(b);
                sequence.push_back(i + 1);
            }
        }
    }

    // Output the result
    cout << sequence.size() << endl;
    for (int s : sequence) {
        cout << s << " ";
    }

    return 0;
}
