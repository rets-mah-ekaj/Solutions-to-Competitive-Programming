#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, x, y, z;
  cin >> t;
  while (t--) {
    cin >> x >> y >> z;
    x = abs(x);
    y = abs(y);
    z = abs(z);
    cout << ((x + y + z == 2 * (max(max(x, y), z))) ? "yes" : "no") << '\n';
  }
  return 0;
}
