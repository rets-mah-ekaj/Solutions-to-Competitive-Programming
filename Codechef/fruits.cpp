#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, m, k;
  cin >> t;
  while (t--) {
    cin >> n >> m >> k;
    if (abs(n - m) - k <= 0)
      cout << 0 << '\n';
    else
      cout << abs(n - m) - k << '\n';
  }
  return 0;
}
