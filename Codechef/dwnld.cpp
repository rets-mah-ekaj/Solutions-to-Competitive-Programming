#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, k;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    int minutes, mb, total = 0;
    while (n--) {
      cin >> minutes >> mb;
      if (minutes < k) {
        k -= minutes;
      }
      else {
        total += (minutes - k) * mb;
        k = 0;
      }
    }
    cout << total << '\n';
  }
  return 0;
}
