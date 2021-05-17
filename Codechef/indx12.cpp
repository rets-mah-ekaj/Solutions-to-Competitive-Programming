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
    int sum = 0;
    for (int i = 0; i < s.length(); ++i)
      sum += s[i] - 'a' + 1;
    cout << ((sum % 2 == 0) ? "YES\n" : "NO\n");
  }
  return 0;
}
