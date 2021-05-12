#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, total = 0;
  char suit;
  cin >> n >> suit;
  string s;
  for (int i = 0; i < 4 * n; ++i) {
    cin >> s;
    if (s[1] == suit) {
      switch (s[0]) {
        case 'A': total += 11; break;
        case 'K': total += 4; break;
        case 'Q': total += 3; break;
        case 'J': total += 20; break;
        case 'T': total += 10; break;
        case '9': total += 14; break;
        case '8': total += 0; break;
        case '7': total += 0; break;
      }
    }
    else {
      switch (s[0]) {
        case 'A': total += 11; break;
        case 'K': total += 4; break;
        case 'Q': total += 3; break;
        case 'J': total += 2; break;
        case 'T': total += 10; break;
        case '9': total += 0; break;
        case '8': total += 0; break;
        case '7': total += 0; break;
      }
    }
  }
  cout << total;
  return 0;
}
