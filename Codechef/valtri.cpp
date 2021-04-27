#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  cout << ((n % 5 == 0 || n % 6 == 0) ? "YES" : "NO");
  return 0;
}
