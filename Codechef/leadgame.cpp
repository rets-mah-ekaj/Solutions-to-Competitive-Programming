#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, maxi = 0, diff = 0, w = 0, p1_total = 0, p2_total = 0, s, t;
  cin >> n;
  while (n--) {
    cin >> s >> t;
    p1_total += s;
    p2_total += t;
    if (p1_total > p2_total) {
      diff = p1_total - p2_total;
      if (diff > maxi) {
        maxi = diff;
        w = 1;
      }
    }
    else {
      diff = p2_total - p1_total;
      if (diff > maxi) {
        maxi = diff;
        w = 2;
      }
    }
  }
  cout << w << ' ' << maxi << '\n';
  return 0;
}
