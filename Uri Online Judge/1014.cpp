#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double distance, fuel;
    cin >> distance >> fuel;
    cout << fixed << setprecision(3) << distance / fuel << " km/l\n";
    return 0;
}
