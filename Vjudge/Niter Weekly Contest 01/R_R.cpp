#include<bits/stdc++.h>
using namespace std;
int main()
{
     string A;
    cin >> A;

   
    A[0] = toupper(A[0]);

   
    for (int i = 0; i < A.length(); i++) 
    {
        if (A[i] == 's') 
        {
            A[i] = '$';
        }
        else if (A[i] == 'i') 
        {
            A[i] = '!';
        }
        else if (A[i] == 'o') 
        {
            A.insert(i + 1, ")");
            A[i] = '(';
            i++;
        }
    }

  
    A += '.';

    cout << A << endl;
    return 0;
}