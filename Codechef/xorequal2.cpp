#include<bits/stdc++.h>
using namespace std;
#define ll long long

void power(ll x, ll y) {
  ll res = 1;
  while (y) {
    if (y % 2 == 1)
      res = ((res * x)+1000000007)%1000000007;
    y = y >> 1;
    x = (x * x);
  }
  cout<<(res+1000000007 )%1000000007<<endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    if (n == 1)
      cout << 1 << '\n';
    else
      power(n - 1, 2);
  }
  return 0;
}
