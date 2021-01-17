#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int t, a, b, k;
  cin >> t;
  while (t--) {
    cin >> a >> b >> k;
    cout << (a - b) * (k / 2) + a * (k & 1) << '\n';
  }
  return 0;
}
