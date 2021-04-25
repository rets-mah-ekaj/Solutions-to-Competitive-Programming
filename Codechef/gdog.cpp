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
    int temp = INT_MIN;
    for (int i = 1; i <= k; ++i)
      if (temp < (n % i))
        temp = n % i;
    cout << temp << '\n';
  }
  return 0;
}
