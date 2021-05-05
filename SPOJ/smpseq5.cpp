#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
  cin >> n;
  vector <int> s(n);
  for (auto &i : s)
    cin >> i;
  cin >> m;
  vector <int> q(m);
  for (auto &i : q)
    cin >> i;
  for (int i = 0; i < min(n, m); ++i) {
    if (s[i] == q[i])
      cout << i + 1 << ' ';
  }
  return 0;
}
