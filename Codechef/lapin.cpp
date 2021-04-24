#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    vector <int> v(26, 0);
    string s;
    cin >> s;
    int n = s.length(), flag = 0;
    if (n % 2 == 0) {
      for (int i = 0; i < n / 2; ++i)
        ++v[s[i] - 'a'];
      for (int i = n / 2; i < n; ++i)
        --v[s[i] - 'a'];
    }
    else {
      for (int i = 0; i < n / 2; ++i)
        ++v[s[i] - 'a'];
      for (int i = (n / 2) + 1; i < n; ++i)
        --v[s[i] - 'a'];
    }
    for (int i = 0; i < v.size(); ++i)
      if (v[i] < 0 || v[i] > 1) {
        flag = 1;
        cout << "NO\n";
        break;
      }
    if (flag == 0)
      cout << "YES\n";
  }
  return 0;
}
