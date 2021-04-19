#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long p,a,b,c;
  cin >> p >> a >> b >> c;
  if (p % a == 0 || p % b == 0 || p % c == 0) {
    cout << 0 << "\n";
  }
  else {
    long long ans = min(min(a - p % a, b - p % b), c - p % c);
    cout << ans << "\n";
  }
}

int main(){
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
