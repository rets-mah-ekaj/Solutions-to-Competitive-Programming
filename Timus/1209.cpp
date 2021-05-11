#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t, k, n;
  bool c = false;
  cin >> t;
  while (t--) {
    cin >> k;
    n = (-1 + sqrt((ll)(8 * k - 7))) / 2;
    if (c)
      cout << ' ';
    c = true;
    if (k == n * (n + 1) / 2 + 1)
      cout << 1;
    else
      cout << 0;
  }
  cout << '\n';
  return 0;
}
