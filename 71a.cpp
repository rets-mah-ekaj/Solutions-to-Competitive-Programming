#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    long long int l = s.length();
    if (l <= 10)
      cout << s << '\n';
    else
      cout << s[0] << l - 2 << s[l - 1] << '\n';
  }
  return 0;
}
