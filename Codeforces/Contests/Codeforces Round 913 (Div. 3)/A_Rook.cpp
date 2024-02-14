
#include<bits/stdc++.h>
using namespace std;

vector<string> rook_moves(const string& square) {
    char col = square[0];
    int row = square[1] - '0';

    vector<string> moves;


    for (int i = 1; i <= 8; ++i) {
        if (i != row) {
            moves.push_back(string(1, col) + to_string(i));
        }
    }

    // Horizontal moves
    for (char c = 'a'; c <= 'h'; ++c) {
        if (c != col) {
            moves.push_back(string(1, c) + to_string(row));
        }
    }

    return moves;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        string square;
        cin >> square;

        vector<string> moves = rook_moves(square);

        // Output the moves
        for (const string& move : moves) {
            cout << move << endl;
        }
    }
    return 0;
}






