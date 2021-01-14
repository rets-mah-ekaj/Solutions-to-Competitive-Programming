#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, current, last = 0, i = 0;
  cin >> n;
  while (n > 0) {
    i++;
    current = i + last;
    last = current;
    n -= current;
    if (n < 0)
      i--;
  }
  cout << i;
  return 0;
}
