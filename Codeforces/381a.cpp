#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector <int> v(n);
  for (auto &i : v)
    cin >> i;
  int i = 0, j = n - 1, max, k = 0, s = 0, d = 0;
  while (i <= j) {
    if (v[i] >= v[j])
      max = v[i++];
    else
      max = v[j--];
    if (k % 2 == 0)
      s += max;
    else
      d += max;
    k++;
  }
  cout << s << ' ' << d << '\n';
  return 0;
}
