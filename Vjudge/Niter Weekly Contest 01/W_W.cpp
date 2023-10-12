#include<bits/stdc++.h>
using namespace std;

int main() 
{
    while (true) 
    {
        string num1, num2;
        cin >> num1 >> num2;

        if (num1 == "0" && num2 == "0") 
        {
            break;  
        }

        int carry = 0;  
        int carry_count = 0;  

       
        for (int i = num1.length() - 1, j = num2.length() - 1; i >= 0 || j >= 0; i--, j--) 
        {
            int digit1 = (i >= 0) ? num1[i] - '0' : 0;
            int digit2 = (j >= 0) ? num2[j] - '0' : 0;

            int sum = digit1 + digit2 + carry;
            carry = sum / 10;

            if (carry > 0) 
            {
                carry_count++;
            }
        }

        if (carry_count == 0) 
        {
            cout << "No carry operation." << endl;
        } 
        else if (carry_count == 1) 
        {
            cout << "1 carry operation." << endl;
        } 
        else 
        {
            cout << carry_count << " carry operations." << endl;
        }
    }

    return 0;
}
