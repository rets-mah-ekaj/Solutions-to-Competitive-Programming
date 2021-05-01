#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, m, k;
  cin >> t;
  while (t--) {
    cin >> n >> m >> k;
    if (k == 0 && n == 1 && m == 1)
      cout << "YES\n";
    else {
      int ans = 0, x[2] = {1, 1};
      while (true) {
        if (x[1] < m) {
          ++x[1];
          ans += x[0];
        }
        else
          break;
      }
      while (true) {
        if (x[0] < n) {
          ++x[0];
          ans += x[1];
        }
        else
          break;
      }
      cout << ((ans == k) ? "YES\n" : "NO\n");
    }
  }
  return 0;
}
