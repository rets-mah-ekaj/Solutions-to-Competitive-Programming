#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll a, ll b) {
  if (a % 11 == 0)
    return (b / 11) - (a / 11) + 1;
  return (b / 11) - (a / 11);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    if (n < 10)
      cout << 0;
    else
      cout << n - f(1, n) - 9;
    cout << '\n';
  }
  return 0;
}
