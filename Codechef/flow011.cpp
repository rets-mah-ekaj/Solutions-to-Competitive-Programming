#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long double t, s;
  cin >> t;
  while (t--) {
    cin >> s;
    cout << fixed << setprecision(2);
    if (s < 1500)
      cout << s + (0.1 * s) + (0.9 * s) << '\n';
    else
      cout << s + 500 + (0.98 * s) << '\n';
  }
  return 0;
}
