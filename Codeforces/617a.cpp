#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  if (n % 5 == 0)
    cout << n / 5;
  else
    cout << n / 5 + 1;
}
