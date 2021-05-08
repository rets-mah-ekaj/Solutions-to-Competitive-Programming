#include<iostream>
using namespace std;

int main() {
  int n;
  float x, y, sum = 0.0;
  cin >> n;
  for(int i=0; i < n; i++) {
    cin >> x >> y;
    sum = sum + (x * y);
  }
  cout << sum;
  return 0;
}
