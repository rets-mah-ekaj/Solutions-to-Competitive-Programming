#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int y, b, r;
  cin >> y >> b >> r;
  cout << (min(y + 2, min(b + 1, r)) * 3) - 3;
  return 0;
}
