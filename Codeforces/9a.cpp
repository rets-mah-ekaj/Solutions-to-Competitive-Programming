#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int y, w, ans;
  cin >> y >> w;
  const string p[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
  ans = max(y, w);
  cout << p[ans] << '\n';
  return 0;
}
