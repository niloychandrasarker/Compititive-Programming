#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.length();
    int slow = 0; 
    int fast = 0; 

    while (fast < n) 
    {
        S[slow] = S[fast];
        if (slow >= 2 && S[slow - 2] == 'A' && S[slow - 1] == 'B' && S[slow] == 'C') {
            slow -= 3;
        }
        slow++;
        fast++;
    }

    S.resize(slow);  
    cout << S << endl;

    return 0;
}