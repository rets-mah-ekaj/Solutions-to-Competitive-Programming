#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, c = 0;
	bool flag = true;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 0; i < n; ++i)
		cin >> b[i];
	int min = *min_element(a, a + n);
	for (int i = 0; i < n; ++i) {
		while (a[i] > min && b[i] != 0) {
			a[i] -= b[i];
			++c;
		}
		if (a[i] < 0)
			flag = false;
		else
			min = a[i];
	}
	for (int i = 0; i < n; ++i)
		if (a[i] != *min_element(a, a + n))
			flag = false;
	if (flag == false)
		cout << -1;
	else
		cout << c;
	return 0;
}
