#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, total, temp;
  cin >> t;
  while (t--) {
    cin >> n;
    total = 0;
    for (int i=0; i<n; i++) {
      cin >> temp;
      total += temp;
    }
    cout << (total + n - 1) / n << '\n';
  }
  return 0;
}
