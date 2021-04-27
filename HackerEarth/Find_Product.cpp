#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, temp;
	long long int result = 1;
	cin >> n;
	while (n--) {
		cin >> temp;
		result = (result * temp) % (1000000007);
	}
	cout << result;
	return 0;
}
