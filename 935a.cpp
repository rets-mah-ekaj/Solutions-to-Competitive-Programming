#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  int v = 0;
  for (int i=1; i <= n / 2; ++i)
    if (n % i == 0)
        v++;
  cout << v;
  return 0;
}
