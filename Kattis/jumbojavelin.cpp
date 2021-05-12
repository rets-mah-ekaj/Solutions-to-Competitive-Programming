#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, total = 0;
  cin >> t;
  if (t == 1) {
    cin >> total;
    cout << total;
  }
  else {
    for (int i = 0; i < t; ++i) {
      cin >> n;
      total += n;
    }
    cout << total - (t - 1);
  }
  return 0;
}
