#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, cnt = 0, ans = 0;
  string s;
  cin >> n >> s;
  for (int i=0; i<s.length(); ++i) {
    if (s[i] != 'x')
      cnt = 0;
    else if (cnt < 2 && s[i] == 'x')
      ++cnt;
    else
      ++ans;
  }
  cout << ans;
  return 0;
}
