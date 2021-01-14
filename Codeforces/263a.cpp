#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a[5][5], result = 0;
  for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
      cin >> a[i][j];
      if (a[i][j] == 1) {
        result = abs(2 - i) + abs(2 - j);
      }
    }
  }
  cout << result;
  return 0;
}
