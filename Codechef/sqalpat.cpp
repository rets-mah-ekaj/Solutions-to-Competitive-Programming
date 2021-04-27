#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k = 1;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    if (i % 2 != 0)
      for (int j = k; j <= k + 4; ++j)
        cout << j << ' ';
    else
      for (int j = k + 4; j >= k; --j)
        cout << j << ' ';
    k += 5;
    cout << '\n';
  }
  return 0;
}
