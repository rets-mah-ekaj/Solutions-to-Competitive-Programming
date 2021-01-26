#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, countz = 0, countn = 0;
  string s;
  cin >> n >> s;
  for (int i=0; i<n; ++i) {
    if (s[i] == 'n')
      ++countn;
    else if (s[i] == 'z')
      ++countz;
  }
  while (countn--)
    cout << 1 << ' ';
  while (countz--)
    cout << 0 << ' ';
  return 0;
}
