#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,result = -1;
    cin >> a >> b >> c;
    for(int i=a ; i<=b ; i++)
    {
      if(i % c == 0)
      {
            result= i;
            break;
      }
      
    } 
    cout << result <<endl;
    return 0;
}