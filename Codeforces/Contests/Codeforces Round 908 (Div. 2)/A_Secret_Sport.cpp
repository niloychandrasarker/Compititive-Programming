#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        string s;
        cin >> n >> s;

        int countA = 0; 
        int countB = 0; 
        int setWinsA = 0; 
        int setWinsB = 0; 

        for (char c : s) {
            if (c == 'A') {
                countA++;
            } else {
                countB++;
            }

            if (countA >= 3 || countB >= 3) 
            {
               
                if (countA > countB) 
                {
                    setWinsA++;
                } 
                else 
                {
                    setWinsB++;
                }
                countA = 0;
                countB = 0;
            }
        }
         

        if (countA > countB) 
        {
            setWinsA++;
        } 
        else if (countB > countA) 
        {
            setWinsB++;
        }
       
        if (setWinsA > setWinsB) 
        {
            cout << "A" << endl;
        } 
        else if (setWinsB > setWinsA) 
        {
            cout << "B" << endl;
        } 
        else 
        {
            cout << "?" << endl;
        }
    }
    return 0;
}1