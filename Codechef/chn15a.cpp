#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, k;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    int temp, total = 0;
    while (n--) {
      cin >> temp;
      if ((temp + k) % 7 == 0)
        ++total;
    }
    cout << total << '\n';
  }
  return 0;
}
