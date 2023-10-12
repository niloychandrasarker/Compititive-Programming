#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int ans;
    while(t--)
    {
        long long int n;
        cin>>n;
        ans=n*(n+1)/2;
        int a=1;
        while(a<=n)
        {
            ans-=2*a;
            a=a*2;
        }
        cout<<ans<<endl;
    }
        return 0;

}