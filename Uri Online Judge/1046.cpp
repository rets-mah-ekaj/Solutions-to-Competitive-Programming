#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b;
  cin >> a >> b;
  if (a >= b)
    cout << "O JOGO DUROU " << 24 - a + b << " HORA(S)\n";
  else
    cout << "O JOGO DUROU " << b - a << " HORA(S)\n";
  return 0;
}
