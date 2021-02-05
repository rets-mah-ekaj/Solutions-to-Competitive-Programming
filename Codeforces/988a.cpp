#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

	int n, k, x;
	cin >> n >> k;
	set <int> s;
	vector <int> v;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (s.count(x) == 0) {
			v.push_back(i);
			s.insert(x);
		}
	}
	if (int(v.size()) < k)
		cout << "NO\n";
  else {
		cout << "YES\n";
		for (int i = 0; i < k; ++i)
			cout << v[i] + 1 << " ";
		cout << '\n';
	}
	return 0;
}
