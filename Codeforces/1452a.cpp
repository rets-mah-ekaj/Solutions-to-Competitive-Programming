#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, x, y;
  cin >> t;
  while (t--) {
    cin >> x >> y;
    if (x == y)
      cout << 2 * max(x, y) << '\n';
    else
      cout << 2 * max(x, y) - 1 << '\n';
  }
  return 0;
}
