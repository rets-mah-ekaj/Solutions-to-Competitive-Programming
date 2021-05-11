#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  string s, temp;
  getline(cin, s);
  while (t--) {
    temp = "";
    getline(cin, s);
    for (int i = 0; i < 10; ++i)
      temp += s[i];
    if (temp == "Simon says") {
      s.erase(0, 10);
      cout << s << '\n';
    }
  }
  return 0;
}
