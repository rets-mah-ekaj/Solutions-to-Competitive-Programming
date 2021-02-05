#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x, y, z, a, b, c;
  cin >> x >> y >> z >> a >> b >> c;
  if (x <= a && y <= a + b - x && z <= a + b + c - x - y)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
