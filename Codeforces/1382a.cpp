#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, m, b;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    vector <int> v(n);
    vector <bool> visited(1005);
    for (auto &i : v) {
      cin >> i;
      visited[i] = true;
    }
    int e = -1;
    for (int i=0; i<m; ++i) {
      cin >> b;
      if (visited[b])
        e = b;
    }
    for (int i=0; i<n; ++i)
      visited[v[i]] = false;
    if (e == -1)
      cout << "NO\n";
    else
      cout << "YES\n1 " << e << '\n';
  }
  return 0;
}
