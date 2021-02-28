#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int res = 0;
    for (int i=11; i >= 0; i--) {
      res = res + (n / (int)(pow(2, i)));
      n = n % (int)(pow(2, i));
    }
    cout << res << '\n';
  }
  return 0;
}
