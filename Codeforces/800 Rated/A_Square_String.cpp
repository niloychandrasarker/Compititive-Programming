#include<bits/stdc++.h>
using namespace std;

// Function to check if a string is square
string is_square(const string& s) {
    int n = s.length();
    
    // Check if the length is odd, it can't be square
    if (n % 2 != 0) {
        return "NO";
    }
    
    // Divide the string into two halves
    string half1 = s.substr(0, n/2);
    string half2 = s.substr(n/2);
    
    // Check if the two halves are equal
    if (half1 == half2) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;
    
    // Consume the newline character after reading t
    cin.ignore();
    
    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        string result = is_square(s);
        cout << result << endl;
    }
    
    return 0;
}
