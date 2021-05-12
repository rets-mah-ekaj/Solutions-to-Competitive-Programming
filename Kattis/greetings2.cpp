#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;
  int count = 0;
  for (int i = 0; i < s.length(); ++i)
    if (s[i] == 'e')
      ++count;
  cout << 'h';
  for (int i = 0; i < count; ++i)
    cout << "ee";
  cout << 'y';
  return 0;
}
