#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string str;
        cin >> str;
        int w = 0, run = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == 'W')
                w++;
            else
                run = run + str[i] - '0';
        }
        int over = str.size() / 6;
        int pover = str.size() - (over * 6);
        
        if (over >= 1&& pover>0)
            cout << over << '.' << pover << " Overs ";
        else if (over == 1)
            cout << over << '.' << pover << " Over ";
        else if (over==0&&pover>0)
            cout << over << '.' << pover << " Over ";
        else
            cout << over << '.' << pover << " Overs ";

        if (run > 1)
            cout << run << " Runs ";
        if (run == 0 || run == 1)
            cout << run << " Run ";
        if (w == 0 || w == 1)
            cout << w << " Wicket.";
        if (w > 1)
            cout << w << " Wickets.";
        cout << endl;
    }

    return 0;
}