#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int a = s[0] - 'a' + 1, b = s[1] - '0';
    a = min(a, 9 - a);
    b = min(b, 9 - b);
    if (a == b) {
      if (a == 1)
        cout << 2 << '\n';
      else if (a == 2)
        cout << 4 << '\n';
      else
        cout << 8 << '\n';
    }
    else {
      if ((a == 1 && b == 2) || (a == 2 && b == 1))
        cout << 3 << '\n';
      else if ((a == 1 && b >= 3) || (a >= 3 && b == 1))
        cout << 4 << '\n';
      else if ((a == 2 && b >= 3) || (a >= 3 && b == 2))
        cout << 6 << '\n';
      else
        cout << 8 << '\n';
    }
  }
  return 0;
}
