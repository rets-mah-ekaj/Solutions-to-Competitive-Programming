#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, maxi = 0, leader, s, t;
  cin >> n;
  while (n--) {
    cin >> s >> t;
    if (s > t && maxi < s - t) {
      leader = 1;
      maxi = s - t;
    }
    else if (t > s && maxi < t - s) {
      leader = 2;
      maxi = t - s;
    }
  }
  cout << leader << ' ' << maxi;
  return 0;
}
