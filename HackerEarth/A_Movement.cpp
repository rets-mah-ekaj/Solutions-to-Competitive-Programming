#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, total = 0;
	cin >> n;
	if (n % 5 == 0)
		total += (int)(n / 5);
	else
		total += (int)(n / 5) + 1;
	cout << total;
	return 0;
}
