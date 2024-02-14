#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {

    int n;
    cin >>n;
    while (n--){
    long long int a;
    cin >> a;
    
    long long int ar[a + 1], arr[a + 1], cr[a + 1];
    map<long long int, long long int> mp;

    ar[0] = 0;

    for (int i = 1; i <= a; i++) {
        cin >> ar[i];
        cr[i - 1] = ar[i];
        arr[i - 1] = ar[i];
    }

    sort(cr, cr + a);

    for (int i = 1; i <= a; i++) {
        ar[i] = ar[i - 1] + cr[i - 1];
    }

    mp[cr[a - 1]] = a - 1;

    for (int i = a - 2; i >= 0; i--) {
        if (ar[i + 1] >= cr[i + 1]) {
            mp[cr[i]] = mp[cr[i + 1]];
        } else {
            mp[cr[i]] = i;
        }
    }

    for (int i = 0; i < a; i++) {
        cout << mp[arr[i]] << " ";
    }

    cout << endl; }

return 0;
}