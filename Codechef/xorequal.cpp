#include<bits/stdc++.h>
using namespace std;

int f(int t) {
  if (t % 4 == 0)
    return t;
  if (t % 4 == 1)
    return 1;
  if (t % 4 == 2)
    return (t + 1);
  return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    if (n == 1)
      cout << 1 << '\n';
    else {
      long long int ans = 0;
      for (int i = 0; i < (pow(2, n)); ++i) {
        if ((i ^ (i + 1) ^ (i + 2) ^ (i + 3)) == 0)
          ans = (ans + 1) % 1000000007;
      }
      cout << ans << '\n';
    }
  }
  return 0;
}
