#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01;
    double n;
    cin >> n;
    int notas = n, moedas = (n - notas) * 100;

    if ((moedas * 1000) % 10 == 9)
        ++moedas;
    n100 = notas / 100;
    notas %= 100;
    n50 = notas / 50;
    notas %= 50;
    n20 = notas / 20;
    notas %= 20;
    n10 = notas / 10;
    notas %= 10;
    n5 = notas / 5;
    notas %= 5;
    n2 = notas / 2;
    notas %= 2;

    m1 = notas / 1;
    notas %= 1;
    m50 = moedas / 50;
    moedas %= 50;
    m25 = moedas / 25;
    moedas %= 25;
    m10 = moedas / 10;
    moedas %= 10;
    m05 = moedas / 5;
    moedas %= 5;
    m01 = moedas / 1;

    cout << "NOTAS:\n";
    cout << n100 << " nota(s) de R$ 100.00\n";
    cout << n50 << " nota(s) de R$ 50.00\n";
    cout << n20 << " nota(s) de R$ 20.00\n";
    cout << n10 << " nota(s) de R$ 10.00\n";
    cout << n5 << " nota(s) de R$ 5.00\n";
    cout << n2 << " nota(s) de R$ 2.00\n";
    cout << "MOEDAS:\n";
    cout << m1 << " moeda(s) de R$ 1.00\n";
    cout << m50 << " moeda(s) de R$ 0.50\n";
    cout << m25 << " moeda(s) de R$ 0.25\n";
    cout << m10 << " moeda(s) de R$ 0.10\n";
    cout << m05 << " moeda(s) de R$ 0.05\n";
    cout << m01 << " moeda(s) de R$ 0.01\n";
    return 0;
}
