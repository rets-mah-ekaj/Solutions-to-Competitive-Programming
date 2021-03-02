#include<iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int n, a, p, x, ans = INT_MAX, flag = 0;
  cin >> n;
  while (n--) {
    cin >> a >> p >> x;
    if (x - a >= 1) {
      ans = min(ans, p);
      flag = 1;
    }
  }
  if (flag == 0)
    cout << -1;
  else
    cout << ans;
  return 0;
}
