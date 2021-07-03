#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector <double> v(3);
  for (auto &i : v)
    cin >> i;
  sort(v.begin(), v.end(), greater<double>());
  if (v[0] >= v[1] + v[2])
    cout << "NAO FORMA TRIANGULO\n";
  else {
    if (v[0] * v[0] == v[1] * v[1] + v[2] * v[2])
      cout << "TRIANGULO RETANGULO\n";
    else if (v[0] * v[0] > v[1] * v[1] + v[2] * v[2])
      cout << "TRIANGULO OBTUSANGULO\n";
    else if (v[0] * v[0] < v[1] * v[1] + v[2] * v[2])
      cout << "TRIANGULO ACUTANGULO\n";
    if (v[0] == v[1] && v[0] == v[2])
      cout << "TRIANGULO EQUILATERO\n";
    else if (v[0] == v[1] || v[0] == v[2] || v[1] == v[2])
      cout << "TRIANGULO ISOSCELES\n";
  }
  return 0;
}
