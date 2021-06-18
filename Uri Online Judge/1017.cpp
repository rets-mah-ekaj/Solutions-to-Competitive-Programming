#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double hours, fuel;
    cin >> hours >> fuel;
    cout << fixed << setprecision(3) << (hours * fuel) / 12 << '\n';
    return 0;
}
