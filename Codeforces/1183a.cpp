#include<bits/stdc++.h>
using namespace std;

bool check(int x) {
  int ans = 0;
  while (x != 0) {
    ans += (x % 10);
    x /= 10;
  }
  if (ans % 4 == 0)
    return true;
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, x;
  cin >> n;
  for (int i = n; ; ++i) {
    if (check(i) == true) {
      cout << i;
      break;
    }
  }
  return 0;
}
