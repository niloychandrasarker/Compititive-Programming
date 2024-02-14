#include <iostream>
using namespace std;

int main() 
{
    int N, X;
    cin >> N >> X;
   
    int scores[N];
    for (int i = 0; i < N; ++i) 
    {
        cin >> scores[i];
    }

    int total_score = 0;
    for (int i = 0; i < N; ++i) 
    {
        if (scores[i] <= X) 
        {
            total_score += scores[i];
        }
    }

    cout << total_score << endl;

    return 0;
}
