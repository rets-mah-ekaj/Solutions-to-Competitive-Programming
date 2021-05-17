#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector <int> v(3);
  cin >> v[0] >> v[1] >> v[2];
  sort(v.begin(), v.end());
  if (v[1] - v[0] == v[2] - v[1])
    cout << "Yes";
  else
    cout << "No";
  return 0;
}
