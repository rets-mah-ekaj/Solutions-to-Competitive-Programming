#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, x, a, b;
  cin >> t;
  while (t--) {
    cin >> x >> a >> b;
    cout << (a + (100 - x) * b ) * 10 << '\n';
  }
  return 0;
}
