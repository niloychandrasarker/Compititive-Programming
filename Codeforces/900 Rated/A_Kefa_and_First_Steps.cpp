#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++)
    {
        cin >> arr[i];
    }
    int counter = 1;
    int max_counter = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] >= arr[i-1])
        {
            counter++;
        }
        else
        {
            max_counter = max(max_counter, counter);
            counter = 1;
        }
    }
    cout << max(max_counter, counter);
    return 0;
}