#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, p = -1, temp;
  cin >> n;
  vector <int> v;
  for (int i = 0; i < n; ++i) {
    cin >> temp;
    if (temp == 1 && p != -1)
      v.push_back(p);
    p = temp;
  }
  v.push_back(p);
  cout << v.size() << '\n';
  for (auto i : v)
    cout << i << ' ';
  return 0;
}
