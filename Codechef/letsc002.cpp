#include<bits/stdc++.h>
using namespace std;

int highestPowerof2(int x) {
    int p = (int)log2(x);
    return (int)pow(2, p);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  int ras = n, count = 0;
  while (ras != 0) {
    ++count;
    ras = ras - highestPowerof2(ras);
  }
  cout << count;
  return 0;
}
