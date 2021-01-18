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
    for (auto &it : v)
      cin >> it;
    while (v.back() == 0)
      v.pop_back();
    reverse(v.begin(), v.end());
    while (v.back() == 0)
      v.pop_back();
    cout << count(v.begin(), v.end(), 0) << '\n';
  }
  return 0;
}
