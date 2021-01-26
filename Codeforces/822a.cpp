#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int a, b, fac = 1;
  cin >> a >> b;
  for (int i = 1; i <= min(a, b); ++i)
    fac *= i;
  cout << fac;
  return 0;
}
