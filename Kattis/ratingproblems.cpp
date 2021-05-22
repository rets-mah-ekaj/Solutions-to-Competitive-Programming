#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k, temp;
  float total = 0;
  cin >> n >> k;
  for (int i = 0; i < k; ++i) {
    cin >> temp;
    total += temp;
  }
  cout << (total + (n - k) * -3) / n << ' ' << (total + (n - k) * 3) / n;
  return 0;
}
