#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  getline(cin, s);
  float white = 0, low = 0, up = 0, sym = 0, n = s.length();
  for (int i = 0; i < n; ++i) {
    if (s[i] >= 65 && s[i] <= 90)
      ++up;
    else if (s[i] >= 97 && s[i] <= 122)
      ++low;
    else if (s[i] == '_')
      ++white;
    else
      ++sym;
  }
  cout << setprecision(16) << white / n << '\n' << low / n << '\n' << up / n << '\n' << sym / n;
  return 0;
}
