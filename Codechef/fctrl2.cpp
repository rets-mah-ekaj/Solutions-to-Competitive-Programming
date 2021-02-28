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
    long long int ans = 1;
    while (n >= 1) {
      ans *= n;
      --n;
    }
    cout << ans << '\n';
  }
  return 0;
}
