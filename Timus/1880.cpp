#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 3, n, total = 0, temp;
  unordered_map <int, int> map;
  while (t--) {
    cin >> n;
    for (int i = 0; i < n; ++i) {
      cin >> temp;
      ++map[temp];
    }
  }
  for (auto i : map)
    if (i.second == 3)
      ++total;
  cout << total << '\n';
  return 0;
}
