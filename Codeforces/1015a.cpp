#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, x ,y, c = 0;
  cin >> n >> m;
  vector <int> v(m + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> x >> y;
    while (x <= y)
      ++v[x++];
  }
  for (int i = 1; i <= m; ++i)
    if (v[i] == 0)
      ++c;
  cout << c << '\n';
  for (int i = 1; i <= m; ++i)
    if (v[i] == 0)
      cout << i << ' ';
  return 0;
}
