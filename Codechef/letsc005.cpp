#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int row, col;
  cin >> row >> col;
  vector <vector <int> > v;
  for (int i = 0; i < row; ++i) {
    vector <int> temp(col);
    for (int j = 0; j < col; ++j) {
      cin >> temp[j];
      if (temp[j] == 1)
        temp[j] = 0;
      else
        temp[j] = 1;
    }
    v.push_back(temp);
  }

  int i, j, s[row][col], maxi_s, maxi_i, maxi_j;
  for (i = 0; i < row; ++i)
    s[i][0] = v[i][0];
  for (j = 0; j < col; ++j)
    s[0][j] = v[0][j];

  for (i = 1; i < row; ++i) {
    for (j = 1; j < col; ++j) {
      if (v[i][j] == 1)
        s[i][j] = min(s[i][j - 1], min(s[i - 1][j], s[i - 1][j - 1])) + 1;
      else
        s[i][j] = 0;
    }
  }

  maxi_s = s[0][0];
  maxi_i = 0;
  maxi_j = 0;

  for (i = 0; i < row; ++i) {
    for (j = 0; j < col; ++j) {
      if (maxi_s < s[i][j]) {
        maxi_s = s[i][j];
        maxi_i = i;
        maxi_j = j;
      }
    }
  }

  cout << maxi_s * maxi_s;
  return 0;
}
