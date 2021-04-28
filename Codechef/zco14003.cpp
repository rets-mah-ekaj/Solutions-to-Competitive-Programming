#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n, total = 0;
	cin >> n;
  vector <long long> v(n);
  for (auto &i : v)
    cin >> i;
  sort(v.begin(), v.end());
  for (long long i = 0; i < n; ++i)
    if (v[i] * (n - i) > total)
      total = v[i] * (n - i);
  cout << total;
	return 0;
}
