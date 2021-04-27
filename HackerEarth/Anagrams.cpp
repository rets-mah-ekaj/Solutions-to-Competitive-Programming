#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while(t--) {
		string str1, str2;
		int count = 0;
		cin >> str1 >> str2;
		for (int i=0; str1[i] != '\0'; i++)
			for (int j=0; str2[j] != '\0'; j++)
				if (str1[i] == str2[j]) {
					count++;
					str2[j] = '0';
					break;
				}
		cout << str1.length() + str2.length() - count * 2 << '\n';
	}
	return 0;
}
