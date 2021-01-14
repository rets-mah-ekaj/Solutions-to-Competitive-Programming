#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, a, b, c, d;
  cin >> n;
  while (true) {
    n++;
    a = n % 10;
    b = (n / 10) % 10;
    c = (n / 100) % 10;
    d = (n / 1000) % 10;
    if (a != b && a != c && a != d && b != c && b != d && c != d)
      break;
  }
  cout << n;
  return 0;
}
