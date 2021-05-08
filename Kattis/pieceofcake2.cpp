#include<iostream>
using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  if (x >= (n - x)) {
    if (y >= (n - y))
      cout << x * y * 4;
    else
      cout << x * (n - y) * 4;
  }
  else {
    if (y >= (n - y))
      cout << (n - x) * y * 4;
    else
      cout << (n - x) * (n - y) * 4;
  }
  return 0;
}
