#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  float a, b;
  cin >> a >> b;
  cout << fixed << setprecision(1) << a + b << '\n' << a - b << '\n' << a * b << '\n' << a / b;
  return 0;
}
