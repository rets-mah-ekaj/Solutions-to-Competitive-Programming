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

  long long t, l, b;
  cin >> t;
  while (t--) {
    cin >> l >> b;
    if (l == 0 || b == 0)
      cout << 0;
    else if (l == b)
      cout << 1;
    else {
      int g = gcd(l, b);
      cout << (l * b) / (g * g);
    }
    cout << '\n';
  }
  return 0;
}
