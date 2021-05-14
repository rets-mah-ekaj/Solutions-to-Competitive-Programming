#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, total = 0;
  cin >> n;
  vector <int> temp;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    if (s[0] == 'A' || s[0] == 'P' || s[0] == 'O' || s[0] == 'R')
      temp.push_back(0);
    else if (s[0] == 'B' || s[0] == 'M' || s[0] == 'S')
      temp.push_back(1);
    else
      temp.push_back(2);
  }
  for (int i = 0; i < n; ++i)
    if (i + 1 < n)
      total += abs(temp[i] - temp[i + 1]);
  cout << total;
  return 0;
}
