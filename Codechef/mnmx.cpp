#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    vector <long long> v(n);
    for (auto &i : v)
      cin >> i;
    sort(v.begin(), v.end());
    cout << v[0] * (n - 1) << '\n';
  }
	return 0;
}
