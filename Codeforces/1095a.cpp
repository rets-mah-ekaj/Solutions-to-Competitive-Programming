#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, i = 0, j = 1;
  string s, result = "";
  cin >> n >> s;
  while (i < n) {
    cout << s[i];
    i += j;
    ++j;
  }
  return 0;
}
