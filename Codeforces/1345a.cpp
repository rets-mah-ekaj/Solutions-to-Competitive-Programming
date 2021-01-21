#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, m;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    if (n == 1 || m == 1 || n * m == 4)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
