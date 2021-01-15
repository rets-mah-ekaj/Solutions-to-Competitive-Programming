#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int a, b, n;
    long long count = 0, sum = 0;
    cin >> a >> b >> n;
    while (sum <= n) {
      if (a > b) {
        b += a;
        sum = b;
        count++;
      }
      else {
        a += b;
        sum = a;
        count++;
      }
    }
    cout << count << '\n';
  }
  return 0;
}
