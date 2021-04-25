#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    vector <int> v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    sort(v.begin(), v.end());
    if (v[0] != v[1] || v[2] != v[3])
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}
