#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned long long t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    cout << __builtin_popcount(n) << '\n';
  }
	return 0;
}
