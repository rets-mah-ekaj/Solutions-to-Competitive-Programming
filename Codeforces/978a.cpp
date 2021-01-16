#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, temp = 0;
  cin >> n;
  vector <int> v(n);
  for (auto &item : v)
    cin >> item;
  for (int i = 0; i < n; ++i)
    for (int j = i + 1; j < n; ++j)
      if (v[i] == v[j])
        v[i] = 0;
  for (int i = 0; i < n; ++i)
    if (v[i] > 0)
      ++temp;
  cout << temp << '\n';
  for (int i = 0; i < n; ++i)
    if (v[i] > 0)
      cout << v[i] << ' ';
}
