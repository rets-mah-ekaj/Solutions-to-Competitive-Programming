#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, temp, o = 0, e = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
      cin >> temp;
      if ((i % 2 != temp % 2) && (i % 2 == 0))
        o++;
      else if ((i % 2 != temp % 2) && (i % 2 != 0))
        e++;
    }
    if (o == e)
      cout << o << '\n';
    else
      cout << -1 << '\n';
  }
}
