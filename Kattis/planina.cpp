#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  long x = 2;
  for(int i=0; i < n; i++) {
    x = x * 2;
    x = x - 1;
  }
  cout << x * x;
  return 0;
}
