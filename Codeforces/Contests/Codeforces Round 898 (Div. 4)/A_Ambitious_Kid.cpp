#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      cin >> n;
      int ar[n];
      int cnt=INT_MAX;
      for(int i=0 ; i<n ; i++)
      {
            cin >> ar[i];

            if(ar[i]==0)
            {
                  cnt=0;
            }
            cnt=min(cnt,abs(ar[i]));
      }
      cout<< cnt << endl;
      
    return 0;
}