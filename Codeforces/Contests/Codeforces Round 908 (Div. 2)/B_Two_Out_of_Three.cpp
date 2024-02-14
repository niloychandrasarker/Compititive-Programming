#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        vector<int> b(n, 0);
        
        map<int, vector<int>> indices;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            indices[a[i]].push_back(i);
        }
        
        bool found = false;
        
        for (auto &entry : indices) {
            if (entry.second.size() >= 2) {
                int x = entry.second[0];
                int y = entry.second[1];
                b[x] = 1;
                b[y] = 2;
                found = true;
                break;
            }
        }
        
        if (!found) {
            for (int i = 0; i < n; i++) {
                if (b[i] == 0) {
                    b[i] = 1;
                    break;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (b[i] == 0) {
                b[i] = 2;
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
