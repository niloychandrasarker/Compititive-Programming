#include <iostream>
#include <string>
using namespace std;
 
int min_ops_to_substr(string x, string s) {
    int ops = 0;
 
    while (x.find(s) == string::npos) {
        x += x;
        ops++;
        if (x.length() > 100) {
            ops = -1;
            break;
        }
    }
 
    return ops;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
 
        int min_operations = min_ops_to_substr(x, s);
        cout << min_operations << endl;
    }
 
    return 0;
}