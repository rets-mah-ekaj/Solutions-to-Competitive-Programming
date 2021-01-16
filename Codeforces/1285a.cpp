#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  string s;
  cin >> s;
  int left = 0, right = 0;
  for (int i=0; i<s.length(); ++i) {
    if (s[i] == 'R')
      ++right;
    else
      ++left;
  }
  cout << left + right + 1;
  return 0;
}
