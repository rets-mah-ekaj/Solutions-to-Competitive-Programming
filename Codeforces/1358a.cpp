#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, m;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    if (n == 1 && m == 1)
      cout << 1 << '\n';
    else if (n % 2 == 0)
      cout << m * (n / 2) << '\n';
    else if (m % 2 == 0)
      cout << n * (m / 2) << '\n';
    else
      cout << (n * m) / 2 + (n * m) % 2 << '\n';
  }
  return 0;
}
