#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, w, h, n;
  cin >> t;
  while (t--) {
    int total = 1;
    cin >> w >> h >> n;
    while (w % 2 == 0 || h % 2 == 0) {
      if (w % 2 == 0) {
        w /= 2;
        total *= 2;
      }
      else if (h % 2 == 0) {
        h /= 2;
        total *= 2;
      }
    }
    cout << (total >= n ? "YES\n" : "NO\n");
  }
  return 0;
}
