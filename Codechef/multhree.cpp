#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
  	ll k, d0, d1, temp;
  	cin >> k >> d0 >> d1;
  	temp = d0 + d1;

  	ll result = temp, sum = (2 * temp) % 10 + (4 * temp) % 10 + (8 * temp) % 10 + (6 * temp) % 10;

  	k -= 2;

    if (k > 0) {
  		result += (temp % 10);
  		--k;
  	}

  	result += (k / 4) * sum;

  	k %= 4;

  	int p = 2;
  	while (k--) {
  		result += (p * temp) % 10;
  		p = (p * 2) % 10;
  	}

  	if ((result % 3) == 0)
      cout << "YES\n";
  	else
      cout << "NO\n";
  }
  return 0;
}
