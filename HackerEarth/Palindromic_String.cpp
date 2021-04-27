#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s, n;
	cin >> s;
	n = s;
	reverse(s.begin(), s.end());
	if (s == n)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
