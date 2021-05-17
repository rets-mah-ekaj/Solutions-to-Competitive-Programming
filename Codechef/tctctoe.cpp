#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int count_x = 0, count_o = 0, count_us = 0, winner_x = 0, winner_o = 0;
    vector <string> v(3);

    for (auto &i : v)
      cin >> i;

    for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < 3; ++j) {
        if (v[i][j] == 'X')
          ++count_x;
        else if (v[i][j] == 'O')
          ++count_o;
        else
          ++count_us;
      }
    }

    if ((v[0][0] == 'X') && (v[0][1] == 'X') && (v[0][2] == 'X'))
      winner_x = 1;
    if ((v[1][0] == 'X') && (v[1][1] == 'X') && (v[1][2] == 'X'))
      winner_x = 1;
    if ((v[2][0] == 'X') && (v[2][1] == 'X') && (v[2][2] == 'X'))
      winner_x = 1;
    if ((v[0][0] == 'X') && (v[1][0] == 'X') && (v[2][0] == 'X'))
      winner_x = 1;
    if ((v[0][1] == 'X') && (v[1][1] == 'X') && (v[2][1] == 'X'))
      winner_x = 1;
    if ((v[0][2] == 'X') && (v[1][2] == 'X') && (v[2][2] == 'X'))
      winner_x = 1;
    if ((v[0][0] == 'X') && (v[1][1] == 'X') && (v[2][2] == 'X'))
      winner_x = 1;
    if ((v[0][2] == 'X') && (v[1][1] == 'X') && (v[2][0] == 'X'))
      winner_x = 1;


    if ((v[0][0] == 'O') && (v[0][1] == 'O') && (v[0][2] == 'O'))
      winner_o = 1;
    if ((v[1][0] == 'O') && (v[1][1] == 'O') && (v[1][2] == 'O'))
      winner_o = 1;
    if ((v[2][0] == 'O') && (v[2][1] == 'O') && (v[2][2] == 'O'))
      winner_o = 1;
    if ((v[0][0] == 'O') && (v[1][0] == 'O') && (v[2][0] == 'O'))
      winner_o = 1;
    if ((v[0][1] == 'O') && (v[1][1] == 'O') && (v[2][1] == 'O'))
      winner_o = 1;
    if ((v[0][2] == 'O') && (v[1][2] == 'O') && (v[2][2] == 'O'))
      winner_o = 1;
    if ((v[0][0] == 'O') && (v[1][1] == 'O') && (v[2][2] == 'O'))
      winner_o = 1;
    if ((v[0][2] == 'O') && (v[1][1] == 'O') && (v[2][0] == 'O'))
      winner_o = 1;

    if ((winner_x == 1 && winner_o == 1) || (count_x - count_o < 0) || (count_x - count_o > 1))
      cout << 3 << '\n';
    else if (count_x == 0 && count_o == 0 && count_us == 9)
      cout << 2 << '\n';
    else if (winner_x == 1 && winner_o == 0 && count_x > count_o)
      cout << 1 << '\n';
    else if (winner_x == 0 && winner_o == 1 && count_x == count_o)
      cout << 1 << '\n';
    else if (winner_x == 0 && winner_o == 0 && count_us == 0)
      cout << 1 << '\n';
    else if (winner_x == 0 && winner_o == 0 && count_us > 0)
      cout << 2 << '\n';
    else
      cout << 3 << '\n';
  }
  return 0;
}
