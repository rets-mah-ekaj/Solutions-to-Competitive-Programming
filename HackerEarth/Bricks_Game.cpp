#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, count = 0;
	cin >> n;
	for (int i=0; i<n; i++) {
		count += i;
		if (count >= n) {
			cout << "Patlu";
			break;
		}
		count += i * 2;
		if (count >= n) {
			cout << "Motu";
			break;
		}
	}
	return 0;
}
