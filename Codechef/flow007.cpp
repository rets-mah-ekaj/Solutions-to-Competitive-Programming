#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, rem, reverse = 0;
    cin >> n;
    while (n) {
      rem = n % 10;
      reverse = reverse * 10 + rem;
      n /= 10;
    }
    cout << reverse << '\n';
  }
  return 0;
}
