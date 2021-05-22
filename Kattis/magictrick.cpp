#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int f(unordered_map <char, int> m) {
  for (auto it : m)
    if (it.second > 1)
      return 0;
  return 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;
  int l = s.length();
  unordered_map <char, int> map;
  for (int i = 0; i < l; ++i)
    ++map[s[i]];
  cout << f(map);
  return 0;
}
