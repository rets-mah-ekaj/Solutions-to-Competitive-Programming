#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 4e6 + 5;
  vector <int> res(n), temp(n);

  for (int i = 0; i < n; ++i) {
    temp[i] = i;
    res[i] = 0;
  }
  for (int i = 2; i < n; ++i) {
    if (temp[i] == i) {
      temp[i] = i - 1;
      for (int j = 2 * i; j < n; j += i)
        temp[j] = (temp[j] / i) * (i - 1);
    }
  }
  for (int i = 1; i < n; ++i) {
    res[i] += i - 1;
    for (int j = 2 * i; j < n; j += i)
      res[j] += i * ((1 + temp[j / i]) / 2);
  }

  int t, k;
  cin >> t;
  while (t--) {
    cin >> k;
    cout << res[4 * k + 1] << '\n';
  }
  return 0;
}
