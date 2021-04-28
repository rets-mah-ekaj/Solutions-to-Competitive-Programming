#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, g, i, n, q;
  cin >> t;
  while (t--) {
    cin >> g;
    while (g--) {
      cin >> i >> n >> q;
      if (n % 2 == 0)
        cout << n / 2 << '\n';
      else {
        if (i == q)
          cout << n / 2 << '\n';
        else
          cout << n / 2 + 1 << '\n';
      }
    }
  }
  return 0;
}
