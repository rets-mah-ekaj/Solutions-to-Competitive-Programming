#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    string s;
    cin >> n >> s;
    vector <int> v(3, 0);
    for (int i = 0; i < n; ++i) {
      if (s[i] == 'R')
        ++v[0];
      else if (s[i] == 'G')
        ++v[1];
      else
        ++v[2];
    }
    cout << n - (*max_element(v.begin(), v.end())) << '\n';
  }
  return 0;
}
