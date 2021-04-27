#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int t, n, m, x;
  cin >> t;
  while (t--) {
    cin >> n >> m >> x;
    --x;
    cout << (x % n) * m + (x / n) + 1 << '\n';
  }
  return 0;
}
