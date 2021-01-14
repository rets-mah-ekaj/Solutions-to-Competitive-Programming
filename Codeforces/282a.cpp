#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, x = 0;
  cin >> n;
  string s;
  while (n--) {
    cin >> s;
    if (s == "++X")
      ++x;
    else if (s == "X++")
      x++;
    else if (s == "--X")
      --x;
    else if (s == "X--")
      x--;
  }
  cout << x;
  return 0;
}
