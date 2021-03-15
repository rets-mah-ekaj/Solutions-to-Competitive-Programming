#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum_square = 0, square_sum = 0;
        for (int i=1; i<=n; i++) {
            sum_square += i;
            square_sum += i * i;
        }
        sum_square *= sum_square;
        cout << abs(sum_square - square_sum) << "\n";
    }
    return 0;
}
