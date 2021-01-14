#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k, temp, result = 0;
  cin >> n >> k;
  while (n--) {
    cin >> temp;
    if (temp + k <= 5)
      result++;
  }
  cout << result / 3;
  return 0;
}
