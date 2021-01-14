#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, count = 0;
  cin >> a >> b;
  while (a <= b) {
    a *= 3;
    b *= 2;
    count++;
  }
  cout << count;
  return 0;
}
