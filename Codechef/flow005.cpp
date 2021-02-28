#include<iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    long long int n, total = 0;
    cin >> n;
    while (n > 0) {
      if (n >= 100) {
        total += (n / 100);
        n = n % 100;
      }
      else if (n >= 50) {
        total += (n / 50);
        n = n % 50;
      }
      else if (n >= 10) {
        total += (n / 10);
        n = n % 10;
      }
      else if (n >= 5) {
        total += (n / 5);
        n = n % 5;
      }
      else if (n >= 2) {
        total += (n / 2);
        n = n % 2;
      }
      else if (n >= 1) {
        total += (n / 1);
        n = n % 1;
      }
    }
    cout << total << '\n';
  }
  return 0;
}
