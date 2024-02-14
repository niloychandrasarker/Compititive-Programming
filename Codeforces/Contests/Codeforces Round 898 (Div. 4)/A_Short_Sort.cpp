#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s2="abc";
    while(n--)
    {
      string s;
      cin >> s;
      if(s == s2)
      {
          cout<<"YES"<<endl;
      }
      else
      {
        if(s=="acb" || s=="bac" || s=="cba")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
      }

    }
    return 0;
}