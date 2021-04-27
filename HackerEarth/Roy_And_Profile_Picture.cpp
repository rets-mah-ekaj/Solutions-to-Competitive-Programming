#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int l, n;
	cin >> l >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		if (a < l || b < l)
			cout << "UPLOAD ANOTHER\n";
		else if (a >= l && b >= l) {
			if (a == b )
				cout << "ACCEPTED\n";
			else
				cout << "CROP IT\n";
		}
	}
	return 0;
}
