#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long t, n, k, d;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    vector <int> v(n);
    for (auto &it: v)
      cin >> it;
    if (k > 1)
      k = 2 + k % 2;
    while (k--) {
      int temp = -1000000000;
      for (int i = 0; i < n; ++i)
        temp = max(temp, v[i]);
      for (int i = 0; i < n; ++i)
        v[i] = temp - v[i];
    }
    for (auto it : v)
      cout << it << ' ';
    cout << '\n';
  }
  return 0;
}
