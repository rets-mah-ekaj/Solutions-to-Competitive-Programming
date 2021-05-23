#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t, a, b, n;
  cin >> t;
  while (t--) {
    cin >> a >> b >> n;
    if (n & 1)
      a *= 2;
    if (a < b)
      swap(a, b);
    cout << a / b << '\n';
  }
  return 0;
}
