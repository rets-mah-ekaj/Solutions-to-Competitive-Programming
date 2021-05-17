#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		unordered_map <char, int> map;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		for (int i = 0; i < s.length(); ++i)
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
				++map[s[i]];
		if ((map['a'] > 0) && (map['e'] > 0) && (map['i'] > 0) && (map['o'] > 0) && (map['u'] > 0))
			cout << "lovely string\n";
		else
			cout << "ugly string\n";
	}
	return 0;
}
