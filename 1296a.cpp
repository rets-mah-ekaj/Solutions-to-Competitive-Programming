#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, sum = 0, temp;
    bool odd = false, even = false;
    cin >> n;
    while (n--) {
      cin >> temp;
      sum += temp;
      odd |= (temp % 2 != 0);
      even |= (temp % 2 == 0);
    }
    if ((odd && even) || (sum % 2 != 0))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
