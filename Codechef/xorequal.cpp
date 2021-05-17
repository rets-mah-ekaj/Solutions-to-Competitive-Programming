#include <bits/stdc++.h>
using namespace std;
#define ll long long

int power(ll x, unsigned int y,int p) {
    ll res = 1;
    while (y) {
        if (y % 2 == 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        unsigned int n;
        ll x = 2;
        int p = 1000000007 ;
        cin >> n;
        unsigned int result;
        result = power(2, n - 1, p);
        cout << result << '\n';
    }
    return 0;
}
