#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;
  int l = s.length(), count = 0;
  for (int i = 0; i < l - 2; ++i)
    for (int j = i + 1; j < l - 1; ++j)
      for (int k = j + 1; k < l; ++k)
        if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
          ++count;
  cout << count;
  return 0;
}
