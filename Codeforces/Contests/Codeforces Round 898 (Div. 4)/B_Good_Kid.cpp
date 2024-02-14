#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      int ar[n];
      for(int i=0 ; i<n ; i++)
      {
            cin >> ar[i];
      }
      sort(ar, ar+n);
      ar[0]+=1;
      int res=1;
      for(int i=0 ; i<n ; i++)
      {
           res*=ar[i];
      }
      cout<< res << endl;


    }
    return 0;
}