#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s1, s2;
  cin >> s1 >> s2;
  reverse(s2.begin(), s2.end());
  if (s1 == s2)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
