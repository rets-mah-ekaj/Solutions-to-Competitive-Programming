#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int p, n, k;
  cin >> p;
  while (p--) {
    cin >> n >> k;
    cout << n << ' ' << ((k * (k + 1)) / 2) + k << '\n';
  }
  return 0;
}
