#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector <int> v(n);
		for (auto &i : v)
			cin >> i;
		int k = 1;
		for (int i = 0; i < n - 1 && k > 0; ++i) {
        	int pos = i;
        	for (int j = i + 1; j < n ; ++j) {
            	if (j - i > k)
                	break;
            	if (v[j] < v[pos])
                	pos = j;
        	}
        	for (int j = pos; j > i; --j)
           		swap(v[j], v[j - 1]);
  			k -=  pos - i;
    	}
		for (auto i : v)
			cout << i << ' ';
		cout << '\n';
	}
	return 0;
}
