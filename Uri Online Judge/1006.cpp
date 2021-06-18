#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1) << "MEDIA = " << ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5) << '\n';
    return 0;
}
