#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    if (n == 2)
      cout << "NO\n";
    else
      cout << ((n % 2 == 0) ? "YES\n" : "NO\n");
  }
  return 0;
}
