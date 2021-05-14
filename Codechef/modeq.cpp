#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, m;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    vector < pair <int, int> > v;
    for (int i = 1; i < n; ++i) {
      for (int j = i + 1; j <= n; ++j) {
        if (((m % i) % j) == ((m % j) % i)) {
          pair <int, int> p;
          p.first = i;
          p.second = j;
          v.push_back(p);
        }
      }
    }
    cout << v.size() << '\n';
  }
  return 0;
}
