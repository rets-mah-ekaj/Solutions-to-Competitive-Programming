#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int h = 1;
    while ((h * (h + 1)) / 2 <= n)
      ++h;
    cout << h - 1 << '\n';
  }
  return 0;
}
