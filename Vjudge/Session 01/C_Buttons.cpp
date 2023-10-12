#include<bits/stdc++.h>
using namespace std;
int main()
{
   int A, B;
    cin >> A >> B;

    // if (B > A) 
    // {
    //     swap(A, B);
    // }
    int coins = A + max(A - 1, B);
    cout << coins << endl;
    return 0;
}
