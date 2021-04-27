#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, ans = 0;
  cin >> n;
  vector <int> v(n);
  for (auto &i : v)
    cin >> i;
  sort(v.begin(), v.end());
  for (int i = 0; i < n - 2; ++i) {
    for (int j = i + 2; j < n; ++j) {
      int temp = (v[i] + v[j]) / 2;
      for (int k = i; k <= j; ++k)
        if (temp == v[k])
          ++ans;
    }
  }
  cout << ans;
  return 0;
}
