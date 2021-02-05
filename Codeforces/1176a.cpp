#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int m2 = 0, m3 = 0, m5 = 0;
    while (n % 2 == 0) {
      ++m2;
      n /= 2;
    }
    while (n % 3 == 0) {
      ++m3;
      n /= 3;
    }
    while (n % 5 == 0) {
      ++m5;
      n /= 5;
    }
    if (n == 1)
      cout << m2 + m3 * 2 + m5 * 3 << '\n';
    else
      cout << -1 << '\n';
  }
  return 0;
}
