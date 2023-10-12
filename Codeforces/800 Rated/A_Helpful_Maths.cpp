#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[10001];
    string s;
    cin >> s;
     int count=0;
     for(int i=0 ; i<s.size() ; i++)
     {
      if(s[i]=='+')
      {
            continue;
      }
      else
      {
            ar[count++] = s[i]-'0';
      }
     }
     sort(ar,ar+count);
     for(int i=0 ; i<count ; i++)
     {
      cout <<ar[i];
      if(i==count-1)
      {
            break;
      }
      cout << "+";
     }
    return 0;
}