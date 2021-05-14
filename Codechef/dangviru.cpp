#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, y, x, temp;
  cin >> n >> y >> x;
  vector <int> v;
  int dead = 0;
  for (int i = 0; i < n; ++i) {
    cin >> temp;
    if (i == 0) {
      cout << 1 << '\n';
      v.push_back(1);
    }
    else {
      v.push_back(v[i - 1] * 4 + v[i - 1] - dead);
    }
  }
}
