#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector <int> v(3), t(3);
    int a, b, c;
    for (int i = 0; i < 3; ++i) {
      cin >> v[i];
      t[i] = v[i];
    }
    sort(v.begin(), v.end());
    for (auto i : v)
      cout << i << '\n';
    cout << '\n';
    for (auto i : t)
      cout << i << '\n';

    return 0;
}
