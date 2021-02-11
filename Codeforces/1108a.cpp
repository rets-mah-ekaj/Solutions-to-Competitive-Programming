#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int q, a, b;
  vector <int> v(4);
  cin >> q;
  while (q--) {
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    for (auto i : v)
      for (auto j : v)
        if (v[0] <= i && i <= v[1] && v[2] <= j && j <= v[3] && i != j) {
          a = i;
          b = j;
        }
    cout << a << ' ' << b << '\n';
  }
  return 0;
}
