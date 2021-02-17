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
    cout << (n <= 3 ? n - 1 : 2 + (n & 1)) << '\n';
  }
  return 0;
}
