#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector <int> v(n);
  for (auto &i : v)
    cin >> i;
  reverse(v.begin(), v.end());
  for (auto i : v)
    cout << i << ' ';
  return 0;
}
