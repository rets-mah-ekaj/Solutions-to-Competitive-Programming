#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;
	long long total = 0;
	for (int i=0; i<s.length(); i++)
		total += ((int)s[i] - 48) * (i+1);
	if (total % 11 == 0)
		cout <<"Legal ISBN";
	else
		cout <<"Illegal ISBN";
	return 0;
}
