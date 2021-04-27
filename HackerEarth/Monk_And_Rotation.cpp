#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector <int> v(n);
		for (int i=0; i<n; i++)
			cin >> v[i];
		k %= n;
		for (int i=0; i<n; i++)
			cout << v[(i + n - k) % n] << ' ';
		cout << '\n';
	}
	return 0;
}
