#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    double a, b;
    cin >> a >> b;
    cout << ((a > b) ? "A\n" : "B\n");
  }
  return 0;
}
