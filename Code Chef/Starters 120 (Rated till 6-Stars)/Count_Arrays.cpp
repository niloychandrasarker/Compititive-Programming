#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>

const ll MOD = 998244353;

ll power(ll b, ll ex) {
    ll result = 1;
    while (ex) {
        if (ex % 2) {
            result = (result * b) % MOD;
        }
        b = (b * b) % MOD;
        ex /= 2;
    }
    return result;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    if (k == 0) {
        cout << 1 << endl;
        return;
    }

    ll ans = power(power(2, n - 1), k);
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
