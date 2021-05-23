#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, m, g;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    g = gcd(n, m);
    cout << (n * m) / (g * g) << '\n';
  }
  return 0;
}
