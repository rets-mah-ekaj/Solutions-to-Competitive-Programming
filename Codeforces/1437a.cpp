#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, l, r;
  cin >> t;
  while (t--) {
    cin >> l >> r;
    (2 * l > r) ? (cout << "YES\n") : (cout << "NO\n");
  }
  return 0;
}
