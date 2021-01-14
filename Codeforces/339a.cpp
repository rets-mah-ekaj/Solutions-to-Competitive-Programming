#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;
  for (int i=0; i<s.size(); i += 2)
    for (int j=0; j<i; j += 2)
      if (s[i] < s[j])
        swap(s[i], s[j]);
  cout << s;
  return 0;
}
