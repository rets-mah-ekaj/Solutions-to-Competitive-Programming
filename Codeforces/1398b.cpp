#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    string s;
    cin >> s;
    vector <int> v;
    int c = 0, ans = 0;
    for (int i = 0; i < s.size(); ++i) {
      if (s[i] == '1') {
        ++c;
        if (c == s.size() || i == s.size() - 1)
          v.push_back(c);
      }
      else {
        v.push_back(c);
        c = 0;
      }
    }
    sort(v.begin(), v.end(), greater <int> ());
    for(int i = 0; i < v.size(); i += 2){
        ans += v[i];
    }
    cout << ans << '\n';
  }
  return 0;
}
