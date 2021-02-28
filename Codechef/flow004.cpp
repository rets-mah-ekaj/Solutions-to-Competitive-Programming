#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  string s;
  cin >> t;
  while (t--) {
    cin >> s;
    cout << (s[0] - 48) + (s[s.length() - 1] - 48) << '\n';
  }
  return 0;
}
