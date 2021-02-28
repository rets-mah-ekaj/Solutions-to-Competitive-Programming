#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    vector <int> v(3);
    for (int i=0; i<3; i++)
      cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[1] << '\n';
  }
  return 0;
}
