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
    int count_1 = 0, count_0 = 0;
    for (int i = 0; i < s.length(); ++i) {
      if (s[i] == '0')
        ++count_0;
      else if (s[i] == '1')
        ++count_1;
    }
    cout << ((count_0 == 1 || count_1 == 1) ? "Yes" : "No") << '\n';
  }
  return 0;
}
