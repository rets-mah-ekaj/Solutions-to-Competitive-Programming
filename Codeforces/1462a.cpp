#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, i, j;
  cin >> t;
  while (t--) {
    cin >> n;
    vector <int> v(n);
    for (auto &item : v)
      cin >> item;
    i = 0;
    j = n - 1;
    while (i <= j) {
      if (i != j)
        cout << v[i++] << ' ' << v[j--] << ' ';
      else
        cout << v[i++];
    }
    cout << '\n';
  }
  return 0;
}
