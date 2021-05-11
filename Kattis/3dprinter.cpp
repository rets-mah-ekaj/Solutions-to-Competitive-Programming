#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, p = 1, a = 0, days = 0;
  cin >> n;
  while (a < n) {
    if (n - a > p) {
      ++days;
      p *= 2;
    }
    else {
      ++days;
      a += p;
    }
  }
  cout << days;
  return 0;
}
