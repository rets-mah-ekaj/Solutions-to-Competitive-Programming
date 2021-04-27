#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int temp, max = INT_MIN;
	for (int i = 0; i < 3; ++i) {
		cin >> temp;
		if (temp > max)
			max = temp;
	}
	cout << max;
	return 0;
}
