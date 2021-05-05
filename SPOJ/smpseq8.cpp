#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, sum_s = 0, sum_q = 0;
  cin >> n;
  vector <int> s(n);
  for (auto &i : s) {
    cin >> i;
    sum_s += i;
  }
  cin >> m;
  vector <int> q(m);
  for (auto &i : q) {
    cin >> i;
    sum_q += i;
  }
  if (sum_q < sum_s)
    for (auto i : s)
      cout << i << ' ';
  else
    for (auto i : q)
      cout << i << ' ';
  return 0;
}
