#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, x, y, xr, yr, d;
  cin >> t;
  while (t--) {
    cin >> x >> y >> xr >> yr >> d;
    double food = x / xr, water = y / yr;
    double ans = min(food, water);
    if (ans < d)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}
