#include<iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int cases;
  cin >> cases;
  while(cases--) {
    int k, b, n, ans = 0;
    cin >> k >> b >> n;
    while(n > 0) {
      ans += (n % b) * (n % b);
      n /= b;
    }
    cout << k << " " << ans << "\n";
  }
}
