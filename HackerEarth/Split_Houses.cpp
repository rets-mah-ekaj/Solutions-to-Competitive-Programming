#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, flag = 0;
	cin >> n;
	string str;
	cin >> str;
	for (int i=0; i<n-1; i++)
		if (str[i] == 'H' && str[i+1] == 'H')
			flag++;
	if (flag == 0) {
		cout << "YES" << '\n';
		for (int i=0; i<n; i++) {
			if (str[i] == '.')
				cout << 'B';
			else
				cout << 'H';
		}
	}
	else
		cout << "NO";
	return 0;
}
