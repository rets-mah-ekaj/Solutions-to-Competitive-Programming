#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int m, n, out;
  cin >> m;
  vector <int> v(m);
  for (auto &i : v)
    cin >> i;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> out;
    cout << v[out - 1] << '\n';
    v.erase(v.begin() + out - 1);
  }
  return 0;
}
