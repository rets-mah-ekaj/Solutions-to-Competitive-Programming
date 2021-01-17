#include<bits/stdc++.h>
using namespace std;

bool isPrime(int k) {
  if (k <= 1)
    return false;
  if (k <= 3)
    return true;
  if (k % 2 == 0 || k % 3 == 0)
    return false;
  for (int j = 5; j * j <= k; j += 6)
    if (k % j == 0 || k % (j + 2) == 0)
      return false;
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, flag = 0;
  cin >> n >> m;
  for (int i = n + 1; i <= m; ++i) {
    if (isPrime(i)) {
      if (i == m) {
        cout << "YES";
        ++flag;
        break;
      }
      else {
        cout << "NO";
        ++flag;
        break;
      }
    }
  }
  if (flag == 0)
    cout << "NO";
}
