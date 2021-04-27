#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, c;
  cin >> a >> b >> c;
  if (a > 0 && b > 0 && c > 0 && a + b + c == 180)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
