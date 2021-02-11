#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;
  int n = s.length(), flag = 1;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '.')
      cout << 0;
    if (s[i] == '-' && s[i + 1] == '.') {
      cout << 1;
      flag = 0;
      ++i;
    }
    if (s[i] == '-' && s[i + 1] == '-') {
      cout << 2;
      ++i;
    }
  }
  return 0;
}
