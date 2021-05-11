#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, w, h, temp;
  cin >> n >> w >> h;
  double d = sqrt(pow(w, 2) + pow(h, 2));
  string s = "";
  while (n--) {
    cin >> temp;
    if (temp <= d)
      s += "DA\n";
    else
      s += "NE\n";
  }
  cout << s;
  return 0;
}
