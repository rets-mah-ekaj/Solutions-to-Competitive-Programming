#include<bits/stdc++.h>
using namespace std;

string f(string s, int n) {
  for (char c = 'A'; c <= 'Z'; ++c) {
    int start = n, end = -1;
    for (int i = 0; i < n; ++i) {
      if (s[i] == c) {
        start = min(start, i);
        end = max(end, i);
      }
    }
    for (int i = start; i <= end; ++i)
      if (s[i] != c)
        return "NO\n";
  }
  return "YES\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    string s;
    cin >> n >> s;
    cout << f(s, n);
  }
  return 0;
}
