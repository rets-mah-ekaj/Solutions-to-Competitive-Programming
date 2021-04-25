#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    vector <int> v(n);
    for (auto &i : v)
      cin >> i;
    int a = v[0];
    if (v[0] != v[n - 1]) {
      if (v[0] == v[1])
        cout << n << '\n';
      else
        cout << 1 << '\n';
    }
    else {
      for (int i = 0; i < n; ++i) {
        if (v[i] != a) {
          cout << i + 1 << '\n';
          break;
        }
      }
    }
  }
  return 0;
}
