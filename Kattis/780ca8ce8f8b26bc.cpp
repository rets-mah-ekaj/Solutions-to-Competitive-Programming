#include<bits/stdc++.h>
using namespace std;

map <string, int> mp;
int parent1[40001], parent2[40001];
double memo[40001];

double relationf(int i) {
	if (i == -1)
		return 0;
	if (memo[i] < 0)
		memo[i] = (relationf(parent1[i]) + relationf(parent2[i])) / 2;
	return memo[i];
}

int namef(const string& name) {
	map <string, int> ::iterator it = mp.find(name);
	if (it == mp.end()) {
		int i = mp.size();
		parent1[i] = -1;
		parent2[i] = -1;
		memo[i] = -1;
		mp.insert(make_pair(name, i));
		return i;
	}
	return it->second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	string name;
	cin >> n >> m >> name;
	mp.insert(make_pair(name, 0));
	memo[0] = 1;
	for (int i = 1; i <= n; ++i) {
		string child_name, parent_name1, parent_name2;
		cin >> child_name >> parent_name1 >> parent_name2;
		int c = namef(child_name);
		parent1[c] = namef(parent_name1);
		parent2[c] = namef(parent_name2);
	}

	string ans;
	double best = 0;
	for (int i = 0; i < m; ++i) {
		cin >> name;
		int p = namef(name);
		double b = relationf(p);
		if (b > best) {
			best = b;
			ans = name;
		}
	}
	cout << ans << '\n';
	return 0;
}
