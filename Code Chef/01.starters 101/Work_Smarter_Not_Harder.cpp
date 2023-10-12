#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        int L, V1, V2;
        cin >> L >> V1 >> V2;

        double tortoise_time = ceil((double)L / V1);
        double hare_time = ceil((double)L / V2);

        if (tortoise_time <= hare_time)
        { 
        
            cout << -1 << endl;
        } 
        else 
        {
            int wait_time = tortoise_time - hare_time;
            if(wait_time >= 1)
            {
                  cout << wait_time - 1 << endl;
            }
            else 
            {
                 cout << -1 << endl;
            }

            
        }
    }

    return 0;
}
