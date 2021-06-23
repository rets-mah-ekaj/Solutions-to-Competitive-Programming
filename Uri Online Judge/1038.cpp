#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    double y;
    cin >> x >> y;
    cout << fixed << setprecision(2) << "Total: R$ ";
    if (x == 1)
      cout << 4.00 * y;
    else if (x == 2)
      cout << 4.50 * y;
    else if (x == 3)
      cout << 5.00 * y;
    else if (x == 4)
      cout << 2.00 * y;
    else if (x == 5)
      cout << 1.50 * y;
    cout << '\n';
    return 0;
}
