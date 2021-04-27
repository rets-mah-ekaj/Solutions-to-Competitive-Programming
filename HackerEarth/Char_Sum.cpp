#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	int w = 0;
	cin >> s;
	for (int i=0; i<s.length(); i++)
		w += s[i] - 'a' + 1;
	cout << w;
	return 0;
}
