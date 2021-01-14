#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector <string> v;
  string s;
  bool t = false;
  while (n--) {
    cin >> s;
    for (int i=0; i<s.length()-1; i++) {
      if ((t == false) && (i == 0 || i == 3) && (s[i] == 'O' && s[i+1] == 'O')) {
        s[i] = '+';
        s[i+1] = '+';
        t = true;
      }
    }
    v.push_back(s);
  }
  if (t == false)
    cout << "NO";
  else {
    cout << "YES\n";
    for (int i=0; i<v.size(); i++)
      cout << v[i] << '\n';
  }
  return 0;
}
