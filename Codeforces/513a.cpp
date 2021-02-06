#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n1, n2, k1, k2;
  cin >> n1 >> n2 >> k1 >> k2;
  (n1 > n2) ? (cout << "First") : (cout << "Second");
  return 0;
}
