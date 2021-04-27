#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	long long final_val = 1;
	if (n <= 1)
		cout << 1;
	else {
		for (int i=2; i<=n; i++)
			final_val *= i;
		cout << final_val;
	}
	return 0;
}
