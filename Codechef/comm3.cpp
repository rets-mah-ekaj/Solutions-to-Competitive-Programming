#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  float t, r, x1, y1, x2, y2, x3, y3;
  cin >> t;
  while (t--) {
    cin >> r >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    float a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    float b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    float c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    if ((a <= r && b <= r) || (a <= r && c <= r) || (b <= r && c <= r))
      cout << "yes\n";
    else
      cout << "no\n";
  }
  return 0;
}
