#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;
  int up = 0, low = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z')
      up++;
    else
      low++;
  }
  if (up > low)
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  else
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  cout << s;
  return 0;
}
