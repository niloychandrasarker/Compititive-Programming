#include <iostream>
using namespace std;

int main() 
{

    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

 
    for (int i = 0; i < Q; ++i) 
    {
        int l, r;
        cin >> l >> r;

        int answer = 0;

    
        for (int j = l; j < r; ++j) 
        {
            if (S[j] == S[j - 1]) 
            {
               
                answer++;
            }
        }
        cout << answer << endl;
    }

    return 0;
}
