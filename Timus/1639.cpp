#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int m, n;
  cin >> m >> n;
  cout << (((m * n) % 2 == 0) ? "[:=[first]\n" : "[second]=:]\n");
  return 0;
}
