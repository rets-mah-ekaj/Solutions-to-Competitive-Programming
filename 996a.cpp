#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, count = 0;
  cin >> n;
  while (n > 0) {
    if (n >= 100) {
      count += n / 100;
      n %= 100;
    }
    else if (n >= 20) {
      count += n / 20;
      n %= 20;
    }
    else if (n >= 10) {
      count += n / 10;
      n %= 10;
    }
    else if (n >= 5) {
      count += n / 5;
      n %= 5;
    }
    else if (n >= 1) {
      count += n / 1;
      n = 0;
    }
  }
  cout << count;
  return 0;
}
