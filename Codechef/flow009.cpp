#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    double q, p, ans;
    cin >> q >> p;
    ans = q * p / 1.0f;
    if (q > 1000)
      ans -= ans * 0.1;
    cout << fixed << setprecision(6) << ans << '\n';
  }
  return 0;
}
