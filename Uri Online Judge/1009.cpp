#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string name;
    double salary, sales;
    cin >> name >> salary >> sales;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << salary + (sales * 0.15) << '\n';
    return 0;
}
