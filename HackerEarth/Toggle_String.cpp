#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;
	for (int i=0; i<s.length(); i++) {
		if (isupper(s[i]))
			s[i] += 32;
		else if (islower(s[i]))
			s[i] -= 32;
	}
	cout << s;
	return 0;
}
