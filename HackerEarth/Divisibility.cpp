#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, temp;
    cin >> n;
    while (n--)
        cin >> temp;
    if (temp % 10 == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
