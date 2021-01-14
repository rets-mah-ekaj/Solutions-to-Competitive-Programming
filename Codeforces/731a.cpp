#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;
  int total = 0;
  char current = 'a';
  for (int i=0; i<s.size(); ++i) {
    total += min(abs(s[i] - current), 26 - abs(s[i] - current));
    current = s[i];
  }
  cout << total;
  return 0;
}
