#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    long long x, y, n;
    cin >> x >> y >> n;
    if (n - n % x + y <= n)
      cout << n - n % x + y << '\n';
    else
      cout << n - (n % x) - (x - y) << '\n';
  }
  return 0;
}
