#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int l, b;
  cin >> l >> b;
  if ((l * b) > (2 * (l + b)))
    cout << "Area\n" << l * b;
  else if ((l * b) < (2 * (l + b)))
    cout << "Peri\n" << 2 * (l + b);
  else
    cout << "Eq\n" << l * b;
  return 0;
}
