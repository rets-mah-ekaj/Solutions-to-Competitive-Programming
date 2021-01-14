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
    (n % 4 == 0) ? (cout << "YES\n") : (cout << "NO\n");
  }
  return 0;
}
