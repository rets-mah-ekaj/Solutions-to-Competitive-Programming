#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, d;
  cin >> t;
  while (t--) {
    cin >> n >> d;
    vector <int> v(n);
    for (auto &it : v)
      cin >> it;
    sort(v.begin(), v.end());
    cout << (v.back() <= d || v[0] + v[1] <= d ? "YES\n" : "NO\n");
  }
  return 0;
}
