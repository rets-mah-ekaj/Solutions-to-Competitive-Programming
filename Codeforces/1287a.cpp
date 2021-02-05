#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, k, ans;
  string s;
  cin >> t;
  while (t--) {
    cin >> n >> s;
    k = -1;
    ans = 0;
    for (int i = 0; i < n; ++i) {
      if (s[i] == 'P' && k > -1)
        ans = max(ans, i - k);
      else if (s[i] == 'A')
        k = i;
    }
    cout << ans << '\n';
  }
  return 0;
}
