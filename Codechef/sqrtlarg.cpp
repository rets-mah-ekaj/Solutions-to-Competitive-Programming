#include <bits/stdc++.h>
using namespace std;
#define INFINITY_ 9999999

int f(int n) {
	int i = 0, udigit, j, cur_divisor = 0, quotient_units_digit = 0, cur_quotient = 0, cur_dividend = 0, cur_remainder = 0;
	int a[10] = {0};
  while (n > 0) {
		a[i] = n % 100;
		n /= 100;
		++i;
	}
	--i;
	for (j = i; j >= 0; j--) {
		cur_remainder = INFINITY_;
		cur_dividend = cur_dividend * 100 + a[j];
	   for (udigit = 0; udigit <= 9; udigit++) {
      if (cur_remainder >= cur_dividend - ((cur_divisor * 10 + udigit)* udigit) && cur_dividend - ((cur_divisor * 10 + udigit) * udigit) >= 0) {
				cur_remainder = cur_dividend - ((cur_divisor * 10 + udigit) * udigit);
				quotient_units_digit = udigit;
			}
		}
		cur_quotient = cur_quotient * 10 + quotient_units_digit;
    cur_divisor = cur_quotient * 2;
    cur_dividend = cur_remainder;
	}
  return cur_quotient;
}

int main()
{
	int x = 1227;
	cout << f(x) << '\n';
	return 0;
}
