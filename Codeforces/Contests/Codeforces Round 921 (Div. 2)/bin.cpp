#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(int ar[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        if (ar[m] == x)
            return m;
 
        if (ar[m] < x)
            l = m + 1;
 
        else
            r = m - 1;
    }
 
    return -1;
}
 
int main(void)
{
    int n,k;
    cout<<"Enter size of aray : ";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar ,ar+n);
    cout<<"Enter element to be searched : ";
    cin>>k;

    int result = binarySearch(ar, 0, n - 1, k);
      if(result)
    cout<<"Element " << k <<" is found"<<endl;
    else
    cout<<"The element "<<k<<" is not there in the aray";
  
    return 0;
}