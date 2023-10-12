#include<bits/stdc++.h>
using namespace std;

void BuildBurger(int S, int D, int K, int caseNumber) 
{
 
    int totalBuns = 2 * (S + D);
    int totalCheese = S + 2 * D;
    int totalPatties = S + 2 * D;


    if (totalBuns >= K + 1 && totalCheese >= K && totalPatties >= K) 
    {
        cout << "Case #" << caseNumber << ": YES" << endl;
    } 
    else 
    {
        cout << "Case #" << caseNumber << ": NO" << endl;
    }
}
    
int main() 
{
    int T;
    cin >> T;

    int caseNumber = 1; 

    while (T--) 
    {
        int S, D, K;
        cin >> S >> D >> K;
        BuildBurger(S, D, K, caseNumber);
        caseNumber++; 
    }

    return 0;
}


