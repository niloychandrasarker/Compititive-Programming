#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int max=0;
    while(t--)
    {
      int n;
      cin >> n;
      if(n>max)
      {
            max=n;
      }
    }
    cout << max << endl;
    return 0;
}