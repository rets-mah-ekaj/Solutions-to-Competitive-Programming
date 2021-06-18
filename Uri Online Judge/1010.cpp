#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    double x, total = 0;
    cin >> a >> b >> x;
    total += b * x;
    cin >> a >> b >> x;
    total += b * x;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << '\n';
    return 0;
}
