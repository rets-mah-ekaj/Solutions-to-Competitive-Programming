#include<iostream>
using namespace std;

int main() {
  int max = 0, x = 0;
  for(int i=1; i <= 5; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a + b + c + d) > max) {
      max = a + b + c + d;
      x = i;
    }
  }
  cout << x << ' ' << max;
  return 0;
}
