#include<bits/stdc++.h>
using namespace std;

double n = 3.14159;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double r;
    cin >> r;
    cout << fixed << setprecision(4) << "A=" << n * r * r << '\n';

    return 0;
}
