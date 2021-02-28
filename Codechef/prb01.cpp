#include<iostream>
using namespace std;

bool prime_check(int a) {
  if (a == 1)
    return false;
  for (int i=2; i < a/2; i++)
    if (a % i == 0)
      return false;
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (prime_check(n))
      cout << "yes";
    else
      cout << "no";
    cout << '\n';
  }
  return 0;
}
