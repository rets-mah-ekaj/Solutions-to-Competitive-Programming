#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector <int> v;
  for (int i = 1; i <= n; ++i)
    if (n % i == 0)
      v.push_back(i);
  cout << v.size() << '\n';
  for (auto i : v)
    cout << i << ' ';
  return 0;
}
