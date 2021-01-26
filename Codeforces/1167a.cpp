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
    cin >> n >> s;
    reverse(s.begin(), s.end());
    while (s.back() != '8') {
      s.pop_back();
      if (s.length() < 11)
        break;
    }
    if (s.length() >= 11)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
