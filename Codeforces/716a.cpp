#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, c, end = 0;
  cin >> n >> c;
  vector <int> v(n);
  for (auto &it : v)
    cin >> it;
  for (int i = 0; i < n - 1; ++i) {
    if (v[i + 1] - v[i] <= c)
      ++end;
    else
      end = 0;
  }
  cout << end + 1;
  return 0;
}
