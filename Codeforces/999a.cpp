#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k, l = 0, r = 0;
  cin >> n >> k;
  vector <int> v(n);
  for (auto &it : v)
    cin >> it;
  for (int i = 0; i < n; ++i) {
    if (v[i] > k)
      break;
    ++l;
  }
  for (int i = n - 1; i >= 0; --i) {
    if (v[i] > k)
      break;
    ++r;
  }
  cout << min(n, l + r);
  return 0;
}
