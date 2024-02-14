#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to be searched : ";
    cin>>k;
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    cout<<"Element " << k <<" is found"<<endl;
    else
    cout<<"The element "<<k<<" is not there in the array";
    return 0;
}