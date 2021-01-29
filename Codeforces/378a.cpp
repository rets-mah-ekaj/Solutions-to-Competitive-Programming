#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, p1 = 0, p2 = 0, draw = 0;
  cin >> a >> b;
  for (int i = 1; i <= 6; ++i) {
    if (abs(a - i) < abs(b - i))
      ++p1;
    else if (abs(b - i) < abs(a - i))
      ++p2;
    else
      ++draw;
  }
  cout << p1 << ' ' << draw << ' ' << p2;
  return 0;
}
