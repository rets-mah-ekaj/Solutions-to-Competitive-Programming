#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int W, n, w, l, area = 0;
  cin >> W >> n;
  while (n--) {
    cin >> w >> l;
    area += w * l;
  }
  cout << area / W;
  return 0;
}
