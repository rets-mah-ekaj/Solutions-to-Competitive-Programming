#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  string a, b, c;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c;
    int flag = 0, n = a.length();
    for (int i = 0; i < n; ++i)
      if (c[i] != a[i] && c[i] != b[i])
        flag = 1;
    if (flag == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
