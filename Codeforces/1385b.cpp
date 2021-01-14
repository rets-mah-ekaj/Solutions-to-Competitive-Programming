#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, temp;
    cin >> n;
    vector <int> v(2 * n);
    for (auto &it : v)
      cin >> it;
    vector <int> used(n);
    vector <int> p;
    for (int i=0; i < 2 * n; ++i)
      if (used[v[i] - 1] == 0) {
        used[v[i] - 1] = true;
        p.push_back(v[i]);
      }
    for (auto it : p)
      cout << it << ' ';
    cout << '\n';
  }
  return 0;
}
