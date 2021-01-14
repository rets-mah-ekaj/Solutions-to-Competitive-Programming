#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    vector <int> v(3);
    for (auto &i : v)
      cin >> i;
    sort(v.begin(), v.end());
    if (v[1] != v[2])
      cout << "NO\n";
    else
      cout << "YES\n" << v[0] << ' ' << v[0] << ' ' << v[2] << '\n';
  }
  return 0;
}
