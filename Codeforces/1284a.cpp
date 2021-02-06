#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, q, x;
  cin >> n >> m;
  vector <string> s(n), t(m);
  for (auto &it : s)
    cin >> it;
  for (auto &it : t)
    cin >> it;
  cin >> q;
  while (q--) {
    cin >> x;
    --x;
    cout << s[x % n] + t[x % m] << '\n';
  }
  return 0;
}
