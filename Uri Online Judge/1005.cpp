#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(5) << "MEDIA = " << ((a * 3.5) + (b * 7.5)) / (3.5 + 7.5) << '\n';
    return 0;
}
