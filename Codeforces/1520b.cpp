#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    int count = 0;
    cin >> n;
    for (int i = 1; i <= n; i = i * 10 + 1)
      for (int j = 1; j <= 9; ++j)
        if (i * j <= n)
          ++count;
    cout << count << '\n';
  }
  return 0;
}
