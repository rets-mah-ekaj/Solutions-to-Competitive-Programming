#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, a, b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if (a == b)
      cout << 0 << '\n';
    else if (a > b) {
      if ((a - b) % 2 != 0)
        cout << 2 << '\n';
      else
        cout << 1 << '\n';
    }
    else {
      if ((b - a) % 2 != 0)
        cout << 1 << '\n';
      else
        cout << 2 << '\n';
    }
  }
  return 0;
}
