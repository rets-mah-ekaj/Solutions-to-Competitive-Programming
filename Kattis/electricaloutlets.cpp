#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k;
  cin >> n;
  while (n--) {
    int total = 0, temp;
    cin >> k;
    for (int i = 0; i < k - 1; ++i) {
      cin >> temp;
      total += temp - 1;
    }
    cin >> temp;
    total += temp;
    cout << total << '\n';
  }
  return 0;
}
