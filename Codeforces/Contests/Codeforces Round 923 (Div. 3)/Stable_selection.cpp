#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int ar[n];
    
    for(int i = 0; i < n; i++) 
    {
        cin >> ar[i];
    }
    
    for(int i = 0; i < n - 1; i++) 
    {
        int min_indx = i;
        
        for(int j = i + 1; j < n; j++) 
        {
            if(ar[j] < ar[min_indx]) 
            {
                min_indx = j;
            }
        }

        int move = ar[min_indx];

        for(int k = min_indx; k > i; k--)
        {
            ar[k] = ar[k - 1];
        }
        ar[i] = move;
    }
    
    for(int i = 0; i < n; i++) 
    {
        cout << ar[i] << " ";
    }

    return 0;
}
