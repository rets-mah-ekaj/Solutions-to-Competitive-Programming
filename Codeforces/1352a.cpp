#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    vector <int> v;
    int p = 1;
    cin >> n;
    while (n > 0) {
      if (n % 10 > 0)
        v.push_back(n % 10 * p);
      n /= 10;
      p *= 10;
    }
    cout << v.size() << '\n';
    for (auto i : v)
      cout << i << ' ';
    cout << '\n';
  }
  return 0;
}
