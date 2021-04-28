#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector <int> v;
  while (true) {
    int t;
    cin >> t;
    if (t == 42)
      break;
    v.push_back(t);
  }
  for (auto i : v)
    cout << i << '\n';
	return 0;
}
