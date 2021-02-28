#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    char ch;
    cin >> ch;
    if (ch == 'B' || ch == 'b')
      cout << "BattleShip";
    else if (ch == 'C' || ch == 'c')
      cout << "Cruiser";
    else if (ch == 'D' || ch == 'd')
      cout << "Destroyer";
    else if (ch == 'F' || ch == 'f')
      cout << "Frigate";
    cout << '\n';
  }
  return 0;
}
