#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  string n;
  cin >> t;
  while (t--) {
    cin >> n;
    int digit = n[0] - '0' - 1;
    int length = n.length();
    cout << 10 * digit + (length * (length + 1)) / 2 << '\n';
  }
  return 0;
}
