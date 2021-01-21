#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, x, result;
  cin >> t;
  while (t--) {
    cin >> n;
    vector <int> count(n + 1), index(n + 1);
    for (int i = 0; i < n; ++i) {
      cin >> x;
      ++count[x];
      index[x] = i + 1;
    }
    result = -1;
    for (int i = 0; i <= n; ++i)
      if (count[i] == 1) {
        result = index[i];
        break;
      }
    cout << result << '\n';
  }
  return 0;
}
