#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, m, temp;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    int result = 0;
    for (int i = 1; i <= n; ++i) {
      cin >> temp;
      result += temp;
    }
    cout << min(result, m) << '\n';
  }
  return 0;
}
