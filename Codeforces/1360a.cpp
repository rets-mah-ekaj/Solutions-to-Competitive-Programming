#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int a, b, max1, max2, min;
    cin >> a >> b;
    max1 = (2 * b > a) ? 2 * b : a;
    max2 = (2 * a > b) ? 2 * a : b;
    min = (max1 < max2) ? max1 : max2;
    cout << min * min << '\n';
  }
  return 0;
}
