#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, flag;
  cin >> t;
  while (t--) {
    flag = 0;
    cin >> n;
    string s = "", temp;
    for (int i=0; i<n; ++i) {
      cin >> temp;
      s += temp;
    }
    set <char, greater<int> > a;
    for (int i=0; i<s.length(); ++i)
      a.insert(s[i]);
    set <char, greater<int> >::iterator itr;
    for (itr = a.begin(); itr != a.end(); ++itr) {
      int count = 0;
      for (int j=0; j<s.length(); ++j)
        if (*itr == s[j])
          count++;
      if (count % n != 0) {
        flag = 1;
        break;
      }
    }
    if (flag == 1)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}
