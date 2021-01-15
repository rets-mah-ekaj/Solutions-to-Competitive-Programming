#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    string s, ans;
    cin >> n >> s;
    for (int i=0; i < s.size(); i += 2)
      ans += s[i];
    cout << ans << '\n';
  }
  return 0;
}
