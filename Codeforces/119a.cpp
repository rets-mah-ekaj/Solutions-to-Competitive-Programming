#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
  if (y == 0)
    return x;
  return gcd(y, x % y);
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, n, i = 0, temp;
  cin >> a >> b >> n;
  while (n > 0) {
    if (i % 2 == 0) {
      temp = gcd(a, n);
      if (temp <= n)
        n -= temp;
      else
        break;
      ++i;
    }
    else {
      temp = gcd(b, n);
      if (temp <= n)
        n -= temp;
      else
        break;
      ++i;
    }
  }
  cout << (--i) % 2;
  return 0;
}
