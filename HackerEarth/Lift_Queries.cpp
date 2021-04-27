#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, a = 0, b = 7, n;
	cin >> t;
	while (t--) {
		cin >> n;
		if (abs(a - n) < abs(b - n)) {
			a = n;
			cout << "A\n";
		}
		else if (abs(a - n) > abs(b - n)) {
			b = n;
			cout << "B\n";
		}
		else if (a < b) {
			cout << "A\n";
			a = n;
		}
		else if (a > b) {
			cout << "B\n";
			b = n;
		}
	}
  return 0;
}
