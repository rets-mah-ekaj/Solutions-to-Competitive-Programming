#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a, b, c, d, r1, r2;
    cin >> a >> b >> c;

    d = (b * b) - (4 * a * c);
    if ((d < 0) || (a == 0))
        cout << "Impossivel calcular\n";
    else {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << '\n';
        cout << "R2 = " << r2 << '\n';
    }
    return 0;
}
