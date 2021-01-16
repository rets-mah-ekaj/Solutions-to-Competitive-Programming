#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  string s;
  cin >> t;
  while (t--) {
    cin >> n;
    cin >> s;
    int p = 0;
    for (int i = s.length() - 1; i >= 0; --i) {
      if (s[i] != ')')
        break;
      ++p;
    }
    if (n - p < p)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
