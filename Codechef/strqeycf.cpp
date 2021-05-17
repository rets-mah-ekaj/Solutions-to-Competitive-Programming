#include<bits/stdc++.h>
using namespace std;

string first_function(string str, int p, char q) {
  string temp = "";
  for (int i = 0; i < str.length; ++i) {
    if (i == p)
      temp += q;
    else
      temp += str[i];
  }
  return temp;
}

char second_function(string str, int k) {
  unordered_map <char, int> map;
  for (int i = 0; i < str.length; ++i)
    ++map[str[i]];
  if (map.size() < k)
    return -1;
  for (int i = 0; i < map.size(); ++i) {
    if (map[i].second == )
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, q;
  cin >> t;
  while (t--) {
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--) {
      int a;
      cin >> a;
      if (a == 1) {
        int l;
        char x;
        cin >> l >> x;
        s = first_function(s, l, x);
      }
      else if (a == 2) {
        int k;
        cin >> k;
        cout << second_function(s, k);
      }
    }
  }
  return 0;
}
