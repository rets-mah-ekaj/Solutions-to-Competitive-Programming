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
    reverse(v.begin(), v.end());
    for (auto it : v)
      cout << it << ' ';
    cout << '\n';
  }
  return 0;
}
