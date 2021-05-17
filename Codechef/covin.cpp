#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    if (n == 1)
      cout << 1 << '\n';
    else if (n == 2)
      cout << 2 << '\n';
    else {
      long long temp1 = 1, temp2 = 2, ans;
      for (int i = 2; i < n; ++i) {
        ans = temp2;
        temp2 += temp1;
        temp1 = ans;
      }
      cout << temp2 << '\n';
    }
  }
  return 0;
}
