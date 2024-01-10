#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char tmp=s[0];
    for(int i=0 ; i<s.length() ; i++)
    {
       char rev = (9-(s[i]-'0')+'0');
       if(rev<s[i]) s[i]=rev;
    }
    if(s[0]=='0') a[0]=tmp;
    for(int i=0 ; i<s.length() ; i++)
    {
      cout << s[i];
    }
    return 0;
}