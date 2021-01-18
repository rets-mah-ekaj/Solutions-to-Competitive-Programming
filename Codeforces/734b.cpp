#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int k2, k3, k5, k6, total = 0, temp;
  cin >> k2 >> k3 >> k5 >> k6;
  temp = min(k2, min(k5, k6));
  total += temp * 256;
  k2 -= temp;
  total += min(k2, k3) * 32;
  cout << total;
  return 0;
}
