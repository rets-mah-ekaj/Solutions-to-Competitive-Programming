#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k, total = 0;
  cin >> k >> n;
  vector <int> v(n);
  for (auto &i : v)
    cin >> i;
  for (int i = 0; i < n; ++i) {
    total += v[i];
    if (total - k >= 0)
      total -= k;
    else
      total = 0;
  }
  cout << total << '\n';
  return 0;
}
