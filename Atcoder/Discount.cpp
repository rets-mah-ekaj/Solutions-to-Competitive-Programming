#include<iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double a, b;
  cin >> a >> b;
  cout << ((a - b) / a) * 100;
  return 0;
}
