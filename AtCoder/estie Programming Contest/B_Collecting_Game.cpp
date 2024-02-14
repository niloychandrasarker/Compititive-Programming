#include<bits/stdc++.h>
using namespace std;

void processTest() 
{
    long long int n;
    cin >> n;

    long long int arrayA[n + 1], arrayB[n + 1], arrayC[n + 1];
    map<long long int, long long int> mapIndex;

    arrayA[0] = 0;

    for (int i = 1; i <= n; i++) 
    {
        cin >> arrayA[i];
        arrayC[i - 1] = arrayA[i];
        arrayB[i - 1] = arrayA[i];
    }

    sort(arrayC, arrayC + n);

    for (int i = 1; i <= n; i++) 
    {
        arrayA[i] = arrayA[i - 1] + arrayC[i - 1];
    }

    mapIndex[arrayC[n - 1]] = n - 1;

    for (int i = n - 2; i >= 0; i--) 
    {
        if (arrayA[i + 1] >= arrayC[i + 1]) 
        {
            mapIndex[arrayC[i]] = mapIndex[arrayC[i + 1]];
        } 
        else 
        {
            mapIndex[arrayC[i]] = i;
        }
    }

    for (int i = 0; i < n; i++) 
    {
        cout << mapIndex[arrayB[i]] << " ";
    }

    cout << endl;
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        processTest();
    }

    return 0;
}
