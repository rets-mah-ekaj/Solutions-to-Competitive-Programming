#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, max = INT_MIN, min = INT_MAX, temp, flag = 0;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> temp;
    if (i == 0) {
      min = temp;
      max = temp;
    }
    else {
      if (temp < min) {
        min = temp;
        flag++;
      }
      else if (temp > max) {
        max = temp;
        flag++;
      }
    }
  }
  cout << flag;
  return 0;
}
