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
    for (auto &i : v)
      cin >> i;
    sort(v.begin(), v.end());
    int p = v[n - 1], mini = 1, taken;
    taken = p;
    for (int i = n - 2; i >= 0; ++i) {
      
    }
  }
  return 0;
}
