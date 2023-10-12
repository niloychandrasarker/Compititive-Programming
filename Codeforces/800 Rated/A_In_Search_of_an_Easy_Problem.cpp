#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ar[n];
    int flag = 0;
    for(int i=0 ; i<n ; i++)
    {
      cin >> ar[i];
      if(ar[i]==1)
      {
            flag = 1;
      }
      
    }
    if(flag==1)
    {
      cout << "HARD" << endl;
    }
    else 
    {
      cout << "EASY" << endl;
    }
    return 0;
}