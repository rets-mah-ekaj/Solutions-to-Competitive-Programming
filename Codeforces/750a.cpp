#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, left = 240, prob = 0, temp = 0;
  cin >> a >> b;
  left -= b;
  for (int i=1; i<=a; i++) {
    temp += i * 5;
    if (temp > left)
      break;
    prob++;
  }
  cout << prob;
  return 0;
}
