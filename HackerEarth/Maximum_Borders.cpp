#include<bits/stdc++.h>
using namespace std;

int n, m;
char s[1001][1001], a[1001][1001];

int weird() {
	int res = INT_MIN;
	for (int i=0; i<n; i++) {
		int cnt = 0;
		for (int j=0; j<m; j++) {
			if (a[i][j] == '#') {
				a[i][j] = '$';
				if (a[i+1][j] == '#')
					a[i+1][j] = '$';
				cnt++;
			}
			else if (a[i][j] == '$') {
				if (a[i+1][j] == '#')
					a[i+1][j] = '$';
				res = max(res, cnt);
				cnt = 0;
			}
			else if (a[i][j] == '.') {
				res = max(res, cnt);
				cnt = 0;
			}
		}
		res = max(res, cnt);
	}
	return res;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				cin >> s[i][j];
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				a[i][j] = s[i][j];
		int res = weird();
		for (int i=n-1; i>=0; i--)
			for (int j=0; j<m; j++)
				a[n-i-1][j] = s[i][j];
		res = max(weird(), res);
		for (int i=0; i<m; i++)
			for (int j=0; j<n; j++)
				a[i][j] = s[i][j];
		res = max(weird(), res);
		for (int i=m-1; i>=0; i--)
			for (int j=0; j<n; j++)
				a[m-i-1][j] = s[i][j];
		res = max(weird(), res);
		cout << res << '\n';
	}
	return 0;
}
