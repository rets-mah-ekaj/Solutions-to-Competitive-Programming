#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  float y, z;
  int x;
  cin >> x >> y;
  if (x % 5 != 0) {
    cout << fixed << setprecision(2) << y;
    return 0;
  }
  else {
    z = (float)(x) + 0.50;
    if ((y - z <= y) && (y - z >= 0))
      cout << fixed << setprecision(2) << y - z;
    else
      cout << fixed << setprecision(2) << y;
    return 0;
  }
}
