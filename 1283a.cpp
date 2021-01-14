#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, h, m;
  cin >> t;
  while (t--) {
    int total = 0;
    cin >> h >> m;
    total += (24 - h) * 60;
    total -= m;
    cout << total << '\n';
  }
  return 0;
}
