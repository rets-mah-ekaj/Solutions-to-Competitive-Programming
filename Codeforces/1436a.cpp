#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, m, ans, temp;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    ans = 0;
    for (int i=0; i<n; ++i) {
      cin >> temp;
      ans += temp;
    }
    (ans == m) ? (cout << "YES\n") : (cout << "NO\n");
  }
  return 0;
}
