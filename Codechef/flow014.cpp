#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    double h, c, t;
    cin >> h >> c >> t;
    if (h > 50 && c < 0.7 && t > 5600)
      cout << 10 << '\n';
    else if (h > 50 && c < 0.7 && t <= 5600)
      cout << 9 << '\n';
    else if (h <= 50 && c < 0.7 && t > 5600)
      cout << 8 << '\n';
    else if (h > 50 && c >= 0.7 && t > 5600)
      cout << 7 << '\n';
    else if (h > 50 || c < 0.7 || t > 5600)
      cout << 6 << '\n';
    else
      cout << 5 << '\n';
  }
  return 0;
}
