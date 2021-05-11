#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int lock_1, lock_2;
  cin >> lock_1 >> lock_2;
  cout << ((lock_1 % 2 == 0 || lock_2 % 2 != 0) ? "yes\n" : "no\n");
  return 0;
}
