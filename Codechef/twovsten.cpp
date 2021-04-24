#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    if (n % 10 == 0)
      cout << 0 << '\n';
    else if (n % 5 != 0)
      cout << -1 << '\n';
    else
      cout << 1 << '\n';
  }
  return 0;
}
