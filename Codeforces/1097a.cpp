#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s1, s2;
  cin >> s1;
  int flag = 0;
  for (int i=0; i<5; ++i) {
    cin >> s2;
    if (s1[0] == s2[0]) {
      flag++;
      break;
    }
    else if (s1[1] == s2[1]) {
      flag++;
      break;
    }
  }
  (flag != 0) ? (cout << "YES") : (cout << "NO");
  return 0;
}
