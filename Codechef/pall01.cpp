#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  string s1, s2;
  cin >> t;
  while (t--) {
    cin >> s1;
    s2 = s1;
    reverse(s1.begin(), s1.end());
    if (s2 == s1)
      cout << "wins";
    else
      cout << "loses";
    cout << '\n';
  }
  return 0;
}
