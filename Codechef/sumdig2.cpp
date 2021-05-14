#include <bits/stdc++.h>
using namespace std;

int check(vector <int> temp) {
  for (int i = 0; i < temp.size(); ++i)
    if (temp[i] == 1)
      return i;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    vector < vector <int> > v;
    for (int i = 0; i < n; ++i) {
      vector <int> temp(n);
      for (auto &j : temp)
        cin >> j;
      v.push_back(temp);
    }
    int prim = 0, sec = 0;
    for (int i = 0; i < n; ++i) {
      prim += v[i][i];
      sec += v[i][n - i - 1];
      if (i == n - i - 1)
        prim -= v[i][i];
    }
    cout << prim + sec << '\n';
  }
  return 0;
}
