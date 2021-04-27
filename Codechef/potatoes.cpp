#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
  if (n < 2)
    return false;
  for (int i = 2; i <= floor(sqrt(n)); ++i)
    if (n % i == 0)
      return false;
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, x, y, value;
  cin >> t;
  while (t--) {
    cin >> x >> y;
    value = x + y + 1;
    while (true) {
      if (is_prime(value) == true)
        break;
      ++value;
    }
    cout << value  - x - y << '\n';
  }
  return 0;
}
