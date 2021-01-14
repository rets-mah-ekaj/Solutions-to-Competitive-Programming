#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, a, b, c;
  long long int count = 0;
  cin >> n;
  while (n--) {
    cin >> a >> b >> c;
    if (a + b + c >= 2)
      count++;
  }
  cout << count;
  return 0;
}
