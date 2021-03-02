#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    n -= 2;
    n = floor(n / 2);
    cout << (n * (n + 1)) / 2 << '\n';
  }
  return 0;
}
