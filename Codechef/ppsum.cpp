#include<bits/stdc++.h>
using namespace std;

int sum_function(int b) {
  return (b * (b + 1)) / 2;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, a, b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    while (a--)
      b = sum_function(b);
    cout << b << '\n';
  }
  return 0;
}
