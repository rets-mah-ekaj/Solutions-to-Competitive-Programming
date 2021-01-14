#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a[3], n, t;
  cin >> t;
  while (t--) {
    cin >> a[0] >> a[1] >> a[2] >> n;
    sort(a, a+3);
    n -= 2 * a[2] - a[1] - a[0];
    if (n < 0 || n % 3 != 0)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}
