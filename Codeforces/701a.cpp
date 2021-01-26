#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  float sum = 0;
  vector <int> v(n+1);
  for (int i = 1; i <= n; ++i) {
    cin >> v[i];
    sum += v[i];
  }
  for (int i = 1; i <= n; ++i) {
    if (v[i] != 0) {
      for (int j = 1; j <= n; ++j) {
        if (v[i] + v[j] == ((sum / n) * 2) && i != j) {
          cout << i << ' ' << j << '\n';
          v[i] = 0;
          v[j] = 0;
        }
      }
    }
  }
}
