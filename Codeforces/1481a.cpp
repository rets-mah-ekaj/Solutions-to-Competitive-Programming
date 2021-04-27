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
    string s;
    cin >> s;
    int r = 0, l = 0, u = 0, d = 0;
    for (int i = 0; i < s.length(); ++i) {
      if (s[i] == 'R')
        ++r;
      else if (s[i] == 'L')
        ++l;
      else if (s[i] == 'U')
        ++u;
      else if (s[i] == 'D')
        ++d;
    }
    if ((x > 0 && r >= x) || (x < 0 && l >= -x))
      x = 0;
    if ((y > 0 && u >= y) || (y < 0 && d >= -y))
      y = 0;
    if (x == 0 && y == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
