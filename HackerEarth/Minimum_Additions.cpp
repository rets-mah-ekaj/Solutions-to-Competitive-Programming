#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n;
	cin >> t;
	while (t--) {
		long long k, total = 0, temp;
		cin >> n >> k;
		for (int i = 0; i < n; ++i) {
			cin >> temp;
			total += temp;
		}
		long long l = total / (k + 1);
		++l;
		long long ans = l - n;
		cout << ((ans < 0) ? 0 : ans) << '\n';
	}
	return 0;
}
