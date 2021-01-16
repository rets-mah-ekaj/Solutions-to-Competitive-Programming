#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, a, b, c, d, k, x, y;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c >> d >> k;
    if (a % c == 0)
      x = a / c;
    else
      x = a / c + 1;
    if (b % d == 0)
      y = b / d;
    else
      y = b / d + 1; 
    if (x + y > k)
      cout << -1 << '\n';
    else
      cout << x << ' ' << y << '\n';
  }
  return 0;
}
