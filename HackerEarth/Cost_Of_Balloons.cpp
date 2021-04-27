#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while(t--) {
		int cost1, cost2, n, temp1, temp2, g1 = 0, g2 = 0, p1 = 0, p2 = 0;
		cin >> cost1 >> cost2 >> n;
		for (int i=0; i<n; i++) {
			cin >> temp1 >> temp2;
			g1 += temp1;
			p1 += temp2;
			g2 += temp2;
			p2 += temp1;
		}
		cout << min(g1 * cost1 + p1 * cost2, g2 * cost1 + p2 * cost2) << '\n';
	}
	return 0;
}
