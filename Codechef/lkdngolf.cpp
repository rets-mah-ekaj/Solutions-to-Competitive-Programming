#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long t, n, x, k;
  cin >> t;
  while (t--) {
    cin >> n >> x >> k;
    if (x % k == 0 || (n + 1 - x) % k == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
