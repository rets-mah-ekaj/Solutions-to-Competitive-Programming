#include<bits/stdc++.h>
using namespace std;

int seive(int n) {
    vector <bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; ++p) {
      if (prime[p] == true)
        for (int i = p * p; i <= n; i += p)
          prime[i] = false;
    }

    int count = 0;
    for (int p = 2; p <= n; ++p)
      if (prime[p])
        ++count;

    return count;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  cout << seive(n);
  return 0;
}
