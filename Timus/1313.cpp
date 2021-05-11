#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector < vector <int> > v;
  for (int i = 0; i < n; ++i) {
    vector <int> temp(n);
    for (auto &i : temp)
      cin >> i;
    v.push_back(temp);
  }

  for (int i = 0; i < n; ++i)
    for (int j = 0; j <= i; ++j)
      cout << v[i - j][j] << ' ';
  
  for (int i = n; i < 2 * n - 1; ++i)
    for (int j = n - 1; j >= i - (n - 1); --j)
      cout << v[j][i - j] << ' ';
  return 0;
}
