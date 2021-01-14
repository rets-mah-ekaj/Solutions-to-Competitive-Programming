#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, i, sum = 0;
    cin >> n;
    if (n % 4 != 0)
      cout << "NO\n";
    else {
      cout << "YES\n";
      for (i=1; i<=n/2; i++) {
        sum += 2 * i;
        cout << 2 * i << ' ';
      }
      for (i=1; i<=n/2-1; i++) {
        sum -= 2 * i - 1;
        cout << 2 * i - 1 << ' ';
      }
      cout << sum << '\n';
    }
  }
  return 0;
}
