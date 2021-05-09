#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(NULL);

  int n;
  while(true) {
    cin >> n;
    if (n == -1)
      break;
    vector <pair <int, int> > v(n);
    for (auto &i : v) {
      pair <int, int> p;
      cin >> p.first >> p.second;
      i = p;
    }
    int miles = v[0].first * v[0].second;
    for (int i = 1; i < n; ++i)
      miles += v[i].first * (v[i].second - v[i - 1].second);
    cout << miles << " miles\n";
  }
  return 0;
}
