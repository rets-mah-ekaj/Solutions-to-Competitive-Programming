#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, c = 0, arr[51], j, i;
  string s;
  cin >> n >> s;
  for (i = 0, j = 0; i < n; ++i) {
    if (s[i] == 'B') {
      ++c;
      arr[j] = c;
      if (i == n - 1)
        ++j;
    }
    else if (c != 0) {
      c = 0;
      ++j;
    }
  }
  cout << j << '\n';
  for (i = 0; i < j; ++i)
    cout << arr[i] << ' ';
  return 0;
}
