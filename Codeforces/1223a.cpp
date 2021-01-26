#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    if (n == 0)
      cout << 4 << '\n';
    else if (n == 1)
      cout << 3 << '\n';
    else if (n == 2)
      cout << 2 << '\n';
    else if (n == 3)
      cout << 1 << '\n';
    else if (n % 2 == 0)
      cout << 0 << '\n';
    else
      cout << 1 << '\n';
  }
  return 0;
}
