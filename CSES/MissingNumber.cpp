#include<iostream>
using namespace std;

int main() {
  long long int n, sum = 0, j;
  cin >> n;
  for(int i=1; i <= n-1; i++) {
    cin >> j;
    sum += j;
  }
  cout << (n * (n + 1) / 2) - sum;
  return 0;
}
