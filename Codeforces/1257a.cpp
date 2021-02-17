#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, x, a, b;
  cin >> t;
  while (t--) {
    cin >> n >> x >> a >> b;
    cout << min(n - 1, abs(a - b) + x) << '\n';
  }
  return 0;
}
