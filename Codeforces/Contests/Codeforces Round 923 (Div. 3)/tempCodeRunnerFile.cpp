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
        
        if(min_indx != i) 
        {
            swap(ar[min_indx], ar[i]);
        }
    }
    for(int i = 0; i < n; i++) 
    {
        cout << ar[i] << " ";
    }

    return 0;
}
