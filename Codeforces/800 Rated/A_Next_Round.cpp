#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int count = 0;
    int kth_score = 0;
    
    for (int i = 0; i < n; ++i) {
        int score;
        cin >> score;
        
        if (i == k - 1) {
            kth_score = score;
        }
        
        if (score >= kth_score && score > 0) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}
