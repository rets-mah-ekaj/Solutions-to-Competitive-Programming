#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k;
  cin >> n >> k;

  while (k--) {
    if (n % 10 != 0)
      n--;
    else
      n /= 10;
  }
  cout << n;
  return 0;
}
