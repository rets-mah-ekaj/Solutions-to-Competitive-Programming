#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k, flag = 0;
  cin >> n >> k;
  vector <int> v(n);
  for (auto &i : v)
    cin >> i;
  for (auto i : v)
    if (i == k)
      flag = 1;
  cout << ((flag == 1) ? 1 : -1);
  return 0;
}
