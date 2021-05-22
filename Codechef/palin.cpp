#include<bits/stdc++.h>
using namespace std;

bool check(int n) {
  int i = n, total = 0;
  while (i != 0) {
    total += i % 10;
    i /= 10;
  }
  if (total == n)
    return true;
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, k;
  cin >> t;
  while (t--) {
    cin >> k;
    int j = k + 1;
    while (true) {
      if (check(j) == false) {
        cout << j << '\n';
        break;
      }
      ++j;
    }
  }
  return 0;
}
