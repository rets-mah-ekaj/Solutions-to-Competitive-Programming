#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    string s;
    int flag = 0;
    cin >> n >> s;
    for (int i = 0; i < s.length(); ++i) {
      if (s[i] == 'I') {
        flag = 1;
        cout << "INDIAN\n";
        break;
      }
      else if (s[i] == 'Y') {
        flag = 1;
        cout << "NOT INDIAN\n";
        break;
      }
    }
    if (flag == 0)
      cout << "NOT SURE\n";
  }
  return 0;
}
