#include<iostream>
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, N, n[200], m, x, temp, mcount = 0;
  cin >> t;
  while (t--) {
    cin >> N;
    n[0] = 1;
    m = 1;
    for (int i = 1; i <= N; ++i) {
      while (mcount < m) {
        x = n[mcount] * i + temp;
        n[mcount] = x % 10;
        temp = x / 10;
        ++mcount;
      }
      while (temp > 0) {
        n[mcount] = temp % 10;
        temp /= 10;
        ++m;
        ++mcount;
      }
      mcount = 0;
    }
    for (int j = m - 1; j >= 0; --j)
      cout << n[j];
    cout << '\n';
  }
  return 0;
}
