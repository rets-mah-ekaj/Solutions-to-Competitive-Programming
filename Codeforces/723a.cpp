#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, c;
  cin >> a >> b >> c;
  int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
  int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
  cout << max - min;
  return 0;
}
