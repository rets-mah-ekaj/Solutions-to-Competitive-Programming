#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double s, a, b;
  int c;
  cin >> s;
  cout << fixed << setprecision(2);
  if (s >= 0 && s <= 400.00) {
    a = s * 1.15;
    b = s * 0.15;
    c = 15;
  }
  else if (s >= 400.01 && s <= 800.00) {
    a = s * 1.12;
    b = s * 0.12;
    c = 12;
  }
  else if (s >= 800.01 && s <= 1200.00) {
    a = s * 1.1;
    b = s * 0.1;
    c = 10;
  }
  else if (s >= 1200.01 && s <= 2000.00) {
    a = s * 1.07;
    b = s * 0.07;
    c = 7;
  }
  else if (s >= 2000.01) {
    a = s * 1.04;
    b = s * 0.04;
    c = 4;
  }
  cout << "Novo salario: " << a << '\n';
  cout << "Reajuste ganho: " << b << '\n';
  cout << "Em percentual: " << c << " %\n";
  return 0;
}
