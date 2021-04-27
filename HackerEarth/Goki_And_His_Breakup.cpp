#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x, temp;
	cin >> n >> x;
	while (n--) {
		cin >> temp;
		if (temp >= x)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
