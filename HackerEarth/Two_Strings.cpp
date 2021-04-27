#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		string s1, s2;
		cin >> s1 >> s2;
		if (s1.length() != s2.length())
			cout << "NO\n";
		else {
			int count1[26] = {0};
			int count2[26] = {0};
			for (int i=0; i<s1.length(); i++)
				count1[s1[i] - 'a']++;
			for (int i=0; i<s2.length(); i++)
				count2[s2[i] - 'a']++;
			s1 = "";
			s2 = "";
			for (int i=0; i<26; i++)
				for (int j=0; j<count1[i]; j++)
					s1 += (char)('a'+i);
			for (int i=0; i<26; i++)
				for (int j=0; j<count2[i]; j++)
					s2 += (char)('a'+i);
			if (s1 == s2)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
	return 0;
}
