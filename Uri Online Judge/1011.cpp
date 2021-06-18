#include<bits/stdc++.h>
using namespace std;

double pi = 3.14159;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long r;
    cin >> r;
    cout << "VOLUME = " << fixed << setprecision(3) << (4 * pi * r * r * r) / 3 << '\n';
    return 0;
}
