#include<bits/stdc++.h>
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int x = 1, y = 0;
    while (n / x > 0) {
  		x *= 5;
  		y += (n / x);
    }
    cout << y << '\n';
  }
  return 0;
}
