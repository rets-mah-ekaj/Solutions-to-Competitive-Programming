#include<iostream>
using namespace std;

int checkf(int n);

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int l, d, x;
  cin >> l >> d >> x;
  for (int i = l; i <= d; i++)
    if (checkf(i) == x) {
      cout << i << "\n";
      break;
    }
  for (int i = d; i >= l; i--)
    if (checkf(i) == x) {
      cout << i;
      break;
    }
}

int checkf(int n) {
  int sum = 0;
  while(n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
