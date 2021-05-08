#include<iostream>
#include<iomanip>
using namespace std;

int main() {
  int l;
  double cost = 0, c;
  cin >> c;
  cin >> l;
  for(int i=0; i < l; i++) {
    double x, y;
    cin >> x >> y;
    cost += x * y * c;
  }
  cout.precision(7);
  cout << fixed << cost;
  return 0;
}
