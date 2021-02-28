#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    long long result = 1;
    cin >> n;
    if (n == 0 || n == 1)
      result = 1;
    else
      for (int i=2; i<=n; i++)
        result *= i;
    cout << result << '\n';
  }
  return 0;
}
