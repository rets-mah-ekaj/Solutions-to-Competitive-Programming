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
    vector <int> v(n);
    for (auto &i : v)
      cin >> i;
    if (v[n-1] >= v[0] + v[1])
      cout << 1 << ' ' << 2 << ' ' << n << '\n';
    else
      cout << -1 << '\n';
  }
  return 0;
}
