#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    cin >> n;
    cout << n << '\n';
    if (n >= 100) {
      n100 = n / 100;
      n -= (n100 * 100);
    }
    if (n >= 50) {
      n50 = n / 50;
      n -= (n50 * 50);
    }
    if (n >= 20) {
      n20 = n / 20;
      n -= (n20 * 20);
    }
    if (n >= 10) {
      n10 = n / 10;
      n -= (n10 * 10);
    }
    if (n >= 5) {
      n5 = n / 5;
      n -= (n5 * 5);
    }
    if (n >= 2) {
      n2 = n / 2;
      n -= (n2 * 2);
    }
    if (n >= 1) {
      n1 = n / 1;
      n -= (n1 * 1);
    }
    cout << n100 << " nota(s) de R$ 100,00\n";
    cout << n50 << " nota(s) de R$ 50,00\n";
    cout << n20 << " nota(s) de R$ 20,00\n";
    cout << n10 << " nota(s) de R$ 10,00\n";
    cout << n5 << " nota(s) de R$ 5,00\n";
    cout << n2 << " nota(s) de R$ 2,00\n";
    cout << n1 << " nota(s) de R$ 1,00\n";

    return 0;
}
