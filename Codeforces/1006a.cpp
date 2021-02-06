#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, temp;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> temp;
    cout << temp - (temp % 2 == 0) << ' ';
  }
  return 0;
}
