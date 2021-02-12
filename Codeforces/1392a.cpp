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
    if (n == 1)
      cout << n << '\n';
    else {
      int temp = count(v.begin(), v.end(), v[0]);
      if (temp == n)
        cout << n << '\n';
      else {
        cout << 1 << '\n';
      }
    }
  }
  return 0;
}
