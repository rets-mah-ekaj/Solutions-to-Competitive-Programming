#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    int rem, count = 0;
    while (n) {
      rem = n % 10;
      if (rem == 4)
        count++;
      n /= 10;
    }
    cout << count << '\n';
  }
  return 0;
}
