#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n, k, temp;
  cin >> t;
	while (t--) {
    cin >> n >> k;
    while (n--) {
      cin >> temp;
      if (temp <= k) {
        cout << 1;
        k -= temp;
      }
      else
        cout << 0;
    }
    cout << '\n';
  }
	return 0;
}
