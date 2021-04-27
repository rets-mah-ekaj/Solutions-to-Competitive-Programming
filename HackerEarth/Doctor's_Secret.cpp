#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int temp;
	cin >> temp;
	if (temp <= 23) {
		cin >> temp;
		if (temp >= 500 && temp <= 1000)
			cout << "Take Medicine";
		else
			cout << "Don't take Medicine";
	}
	else {
		cin >> temp;
		cout << "Don't take Medicine";
	}
	return 0;
}
