#include<bits/stdc++.h>
using namespace std;

int f(int temp) {
  int total = 0;
  while (temp > 0) {
    total += (temp % 10);
    temp /= 10;
  }
  return total;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  for (int i = n; i <= 1000000000; ++i) {
    if (i % f(i) == 0) {
      cout << i;
      break;
    }
  }
  return 0;
}
