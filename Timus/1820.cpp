#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k;
  cin >> n >> k;
  n *= 2;
  if (n <= k)
    cout << 2 << '\n';
  else
    cout << ((n % k == 0) ? (n / k) : ((n / k) + 1)) << '\n';
  return 0;
}
