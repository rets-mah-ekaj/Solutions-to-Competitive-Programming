#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int sh, sm, eh, em, m;
		cin >> sh >> sm >> eh >> em;
		m = 60 * eh + em - 60 * sh - sm;
		cout << m / 60 << ' ' << m % 60 << '\n';
	}
	return 0;
}
