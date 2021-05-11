#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int f, problems = 12, time_left = 300;
  cin >> f;
  problems -= f;
  time_left -= 60;
  cout << ((problems * 45 <= time_left) ? "YES\n" : "NO\n");
  return 0;
}
