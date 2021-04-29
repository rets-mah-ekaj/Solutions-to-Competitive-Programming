#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k, temp, ans = 0;
  cin >> n >> k;
  vector <int> v(n + 1, 0);
  string s;
  for (int i = 0; i < k; ++i) {
    cin >> s;
    if (s == "CLOSEALL") {
      fill(v.begin(), v.end(), 0);
      ans = 0;
    }
    else {
      cin >> temp;
      if (v[temp] == 0) {
        v[temp] = 1;
        ++ans;
      }
      else {
        v[temp] = 0;
        --ans;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
