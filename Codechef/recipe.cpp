#include<bits/stdc++.h>
using namespace std;

int check_gcd(int x, int y) {
  if (y == 0)
    return x;
  return check_gcd(y, x % y);
}

int gcd_list(vector <int> a, int b) {
  int temp = a[0];
  for (int i = 1; i < b; ++i) {
    temp = check_gcd(a[i], temp);
    if (temp == 1)
      return 1;
  }
  return temp;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    vector <int> v(n);
    for (auto &i : v)
      cin >> i;
    int value = gcd_list(v, n);
    for (int i = 0; i < n; ++i)
      cout << v[i] / value << ' ';
    cout << '\n';
  }
  return 0;
}
