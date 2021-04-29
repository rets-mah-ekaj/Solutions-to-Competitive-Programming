#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, t = 0;
  cin >> n;
  if (n == 0)
    ++t;
  while (n > 0) {
    ++t;
    n /= 10;
  }
  if (t == 1)
    cout << '1';
  else if (t == 2)
    cout << '2';
  else if (t == 3)
    cout << '3';
  else
    cout << "More than 3 digits";
}
