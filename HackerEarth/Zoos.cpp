#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	int z = 0, o = 0;
	cin >> s;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == 'z')
			++z;
		else if (s[i] == 'o')
			++o;
	}
	if (2 * z == o)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
