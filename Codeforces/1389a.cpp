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
    if (2 * l > r)
      cout << "-1 -1\n";
    else
      cout << l << ' ' << 2 * l << '\n';
  }
  return 0;
}
