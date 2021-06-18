#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, xa, xb, a, b;
  cin >> t;
  while (t--) {
    cin >> xa >> xb >> a >> b;
    cout << ceil(a / xa) + ceil(b / xb) << '\n';
  }
  return 0;
}
