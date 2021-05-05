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
  for (int i = 0; i < n; ++i) {
    if (find(q.begin(), q.end(), s[i]) != q.end())
      cout << s[i] << ' ';
  }
  return 0;
}
