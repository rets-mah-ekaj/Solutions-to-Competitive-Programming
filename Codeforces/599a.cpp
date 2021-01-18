#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int d1, d2, d3;
  cin >> d1 >> d2 >> d3;
  vector <int> v(4);
  v[0] = d1 + d3 + d2;
  v[1] = d1 + d3 + d3 + d1;
  v[2] = d2 + d2 + d1 + d1;
  v[3] = d2 + d3 + d3 + d2;
  cout << *min_element(v.begin(), v.end());
  return 0;
}
