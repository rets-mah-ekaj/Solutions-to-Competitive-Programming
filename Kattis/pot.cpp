#include<iostream>
#include<cmath>
using namespace std;

int main() {
  int n, temp;
  long x, sum;
  cin >> n;
  for(int i=0; i < n; i++) {
    cin >> x;
    temp = x % 10;
    x = x / 10;
    sum = sum + pow(x, temp);
  }
  cout << sum << endl;
  return 0;
}
