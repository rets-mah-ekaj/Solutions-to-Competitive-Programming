#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1);
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
      cout << "Perimetro = " << a + b + c << '\n';
    else
      cout << "Area = " << ((a + b) * c) / 2 << '\n';
    return 0;
}
