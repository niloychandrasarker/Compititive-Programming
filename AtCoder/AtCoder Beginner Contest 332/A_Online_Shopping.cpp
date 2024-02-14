#include<bits/stdc++.h>
using namespace std;
int main()
{
     int N, S, K;
    std::cin >> N >> S >> K;

    int total_price = 0;

    for (int i = 0; i < N; ++i) 
    {
        int P, Q;
        std::cin >> P >> Q;
        total_price += P * Q;
    }

    int shipping_fee = (total_price >= S) ? 0 : K;
    int amount_paid = total_price + shipping_fee;

    std::cout << amount_paid << std::endl;
    return 0;
}