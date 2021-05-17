#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int n;
  cin >> n;
  if (n < 1) {
    n = abs(n);
    cout << -((n * (n + 1)) / 2) + 1 << '\n';
  }
  else
    cout << (n * (n + 1)) / 2 << '\n';
  return 0;
}
