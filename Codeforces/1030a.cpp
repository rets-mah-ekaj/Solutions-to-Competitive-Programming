#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, temp, sum = 0;
  cin >> n;
  while (n--) {
    cin >> temp;
    sum += temp;
  }
  if (sum > 0)
    cout << "HARD";
  else
    cout << "EASY";
  return 0;
}
