#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count=0;
    sort(s.begin(),s.end());
    for(int i=0 ; i<=s.length() ; i++)
    {
      if(s[i] != s[i-1])
      {
            count++;
      }
    }
    if(count%2==1)
    {
      cout << "CHAT WITH HER!" <<endl;
    }
    else
    {
      cout << "IGNORE HIM!"<<endl;
    }
    return 0;
}