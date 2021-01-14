#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  string s;
  cin >> n >> s;
  if (n < 26)
    cout << "NO";
  else {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set <char> k;
    for (int i=0; i<s.length(); i++)
      k.insert(s[i]);
    if (k.size() == 26)
      cout << "YES";
    else
      cout << "NO";
  }
  return 0;
}
