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
    vector <int> v(n);
    for (auto &i : v)
      cin >> i;
    int maxi = *max_element(v.begin(), v.end());
    vector <int> ans(maxi + 1, 0);
    for (int i = 0; i < n; ++i)
      ++ans[v[i]];
    cout << check(ans) << '\n';
  }
  return 0;
}
