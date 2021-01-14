#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    vector <int> v(n);
    for (int i=0; i < n; ++i)
      v[i] = n - i;
    if (n % 2 != 0)
      swap(v[n / 2], v[n - 1]);
    for (auto i : v)
      cout << i << ' ';
    cout << '\n';
  }
  return 0;
}
