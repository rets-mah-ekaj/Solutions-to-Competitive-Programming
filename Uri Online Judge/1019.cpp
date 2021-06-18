#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, temp;
    cin >> n;
    temp = n / 3600;
    cout << temp << ':';
    n = n - temp * 3600;
    temp = n / 60;
    cout << temp << ':';
    n = n - temp * 60;
    cout << n << '\n';

    return 0;
}
