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
  if (n == 1)
    cout << 1;
  else {
    vector <int> check(*max_element(v.begin(), v.end()) + 1, 0);
    for (int i = 0; i < n; ++i)
      check[v[i]]++;
    cout << *max_element(check.begin(), check.end());
  }
  return 0;
}
