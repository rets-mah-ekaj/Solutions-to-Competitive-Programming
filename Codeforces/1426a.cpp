#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, x;
  cin >> t;
  while (t--) {
    cin >> n >> x;
    if (n <= 2)
      cout << 1 << '\n';
    else
      cout << (n - 3) / x + 2 << '\n';
  }
  return 0;
}
