#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      long long n,s;
      cin >> n >> s;
      long long res=pow(n,2);
      cout<<s/res << endl;
    }
    return 0;
}