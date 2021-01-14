#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    if (s.length() == 2)
      cout << s;
    else {
      for (int i=0; i<s.length(); i += 2)
        cout << s[i];
      cout << s[s.length()-1];
    }
    cout << '\n';
  }
}
