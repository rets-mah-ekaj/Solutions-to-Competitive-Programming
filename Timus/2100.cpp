#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  int total = 2;
  string s;
  for (int i = 0; i < n; ++i) {
    cin >> s;
    int flag = 0;
    for (int j = 0; j < s.length(); ++j) {
      if (s[j] == '+') {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      ++total;
    else
      total += 2;
  }
  if (total == 13)
    ++total;
  cout << total * 100 << '\n';
  return 0;
}
