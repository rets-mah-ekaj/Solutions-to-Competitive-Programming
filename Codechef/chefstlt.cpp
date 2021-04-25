#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    string s1, s2;
    cin >> s1 >> s2;
    int mini = 0, maxi = 0, n = s1.length();
    for (int i = 0; i < n; ++i) {
      if (s1[i] != '?' && s2[i] != '?' && s1[i] != s2[i]) {
        ++mini;
        ++maxi;
      }
      else if ((s1[i] != '?' && s2[i] == '?') || (s1[i] == '?' && s2[i] != '?') || (s1[i] == '?' && s2[i] == '?'))
        ++maxi;
    }
    cout << mini << ' ' << maxi << '\n';
  }
  return 0;
}
