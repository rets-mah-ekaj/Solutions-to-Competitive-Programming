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
    if (n == 0 || n == 1)
      cout << 1;
    else if (n == 2)
      cout << 2;
    else if (n == 3)
      cout << 6;
    else if (n == 4)
      cout << 4;
    else
      cout << 0;
    cout << '\n';
  }
}
