#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, temp;
    cin >> n;
    temp = n / 365;
    cout << temp << " ano(s)\n";
    n = n - temp * 365;
    temp = n / 30;
    cout << temp << " mes(es)\n";
    n = n - temp * 30;
    cout << n << " dia(s)\n";

    return 0;
}
