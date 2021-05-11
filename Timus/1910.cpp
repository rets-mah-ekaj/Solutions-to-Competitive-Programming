#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, i;
  cin >> n;
  vector <int> v(n);
  for (auto &i : v)
    cin >> i;

  int maxi = v[0] + v[1] + v[2], x = 1;
  for (i = 1; i < n - 2; ++i) {
    if (v[i] + v[i + 1] + v[i + 2] > maxi) {
      maxi = v[i] + v[i + 1] + v[i + 2];
      x = i + 1;
    }
  }

  cout << maxi << ' ' << x + 1;
  return 0;
}
