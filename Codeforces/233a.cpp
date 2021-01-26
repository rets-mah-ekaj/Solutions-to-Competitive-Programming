#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  if (n % 2 != 0)
    cout << -1;
  else {
    vector <int> v(n);
    for (int i=0; i<n; ++i)
      v[i] = i + 1;
    for (int i=0; i < n - 1; i += 2)
      swap(v[i], v[i + 1]);
    for (auto it : v)
      cout << it << ' ';
    cout << '\n';
  }
  return 0;
}
