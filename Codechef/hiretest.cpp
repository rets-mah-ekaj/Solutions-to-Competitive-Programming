#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, m, x, y;
  cin >> t;
  while (t--) {
    cin >> n >> m >> x >> y;
    vector <string> v(n);
    for (auto &i : v)
      cin >> i;
    string s = "";
    for (int i = 0; i < n; ++i) {
      int u = 0, p = 0, f = 0;
      for (int j = 0; j < m; ++j) {
        if (v[i][j] == 'U')
          ++u;
        else if (v[i][j] == 'P')
          ++p;
        else
          ++f;
      }
      if (x <= f)
        s += "1";
      else if (x - 1 <= f && y <= p)
        s += "1";
      else
        s += "0";
    }
    cout << s << '\n';
  }
  return 0;
}
