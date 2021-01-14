#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, count1 = 0, count2 = 0;
  cin >> a >> b;
  if (a < b) {
    count1 = a;
    b -= a;
    a = 0;
    count2 = b / 2;
  }
  else if (b < a) {
    count1 = b;
    a -= b;
    b = 0;
    count2 = a / 2;
  }
  else {
    count1 = a;
    a = 0;
    b = 0;
    count2 = 0;
  }
  cout << count1 << ' ' << count2;
  return 0;
}
