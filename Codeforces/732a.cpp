#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int k, r, temp, i = 0;
  cin >> k >> r;
  while (true) {
    i++;
    temp = k * i;
    if (temp % 10 == 0 || temp % 10 == r)
      break;
  }
  cout << i;
  return 0;
}
