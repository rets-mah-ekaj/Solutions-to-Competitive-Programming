#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long n;
  string s;
  cin >> n >> s;
  vector <int> v(10, 0);
  for (long i=0; i < n; i++) {
    if (s[i] == 'L') {
      for (long j = 0; j < 10; j++) {
        if (!v[j]) {
          v[j] = 1;
          break;
        }
      }
    }
    else if (s[i] == 'R') {
      for (long j=9; j >= 0; j--) {
        if (!v[j]) {
          v[j] = 1;
          break;
        }
      }
    }
    else
      v[s[i] - '0'] = 0;
  }
  for (auto it : v)
    cout << it;
  return 0;
}
