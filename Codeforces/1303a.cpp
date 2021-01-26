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
    while (s.back() == '0')
      s.pop_back();
    reverse(s.begin(), s.end());
    while (s.back() == '0')
      s.pop_back();
    cout << count(s.begin(), s.end(), '0') << '\n';
  }
  return 0;
}
