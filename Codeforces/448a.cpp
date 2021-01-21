#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int cups = 0, medals = 0, n, x;
  for (int i = 0; i < 3; ++i) {
    cin >> x;
    cups += x;
  }
  for (int i = 0; i < 3; ++i) {
    cin >> x;
    medals += x;
  }
  cin >> n;
  cups = (cups + 5 - 1) / 5;
  medals = (medals + 10 - 1) / 10;
  if (cups + medals > n)
    cout << "NO";
  else
    cout << "YES";
  return 0;
}
