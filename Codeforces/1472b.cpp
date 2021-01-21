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
    int total = 0, temp, one = 0, two = 0;
    for (int i=0; i<n; ++i) {
      cin >> temp;
      if (temp == 1)
        ++one;
      else
        ++two;
      total += temp;
    }
    if (total % 2 != 0)
      cout << "NO\n";
    else if (one >= 2)
      cout << "YES\n";
    else if (n % 2 == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
