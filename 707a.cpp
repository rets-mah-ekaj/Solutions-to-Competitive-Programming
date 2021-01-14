#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, color = 0, bw = 0;
  cin >> n >> m;
  vector <char> v(n * m);
  for (auto &it : v)
    cin >> it;
  for (auto i : v) {
    if (i == 'B' || i == 'W' || i == 'G')
      bw++;
    else
      color++;
  }
  if (bw != 0 && color == 0)
    cout << "#Black&White";
  else
    cout << "#Color";
  return 0;
}
