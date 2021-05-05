#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x;
  cin >> n >> x;
  vector <int> s(n), q(n);
  for (auto &i : s)
    cin >> i;
  for (auto &i : q)
    cin >> i;
  for (int i = 0; i < n; ++i) {
    for (int j = -x; j <= x; ++j) {
      if ((i + j >= 0) && (i + j < n) && (s[i] == q[i + j])) {
        cout << i + 1 << ' ';
        continue;
      }
    }
  }
  return 0;
}
