#include<bits/stdc++.h>
using namespace std;

string myfunction(vector <string> t) {
  int x = 0;
  for (int i = 0; i < t.size(); ++i)
    for (int j = 0; j < t[i].length(); ++j)
      if (t[i][j] == '5')
        return "Hello World!";
  return "there is no 5 in the array";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector <string> v(19);
  v[0] = "12";
  v[1] = "65";
  v[2] = "4";
  v[3] = "67";
  v[4] = "0987";
  v[5] = "234";
  v[6] = "87";
  v[7] = "89";
  v[8] = "6745";
  v[9] = "567";
  v[10] = "987";
  v[11] = "476";
  v[12] = "708";
  v[13] = "36";
  v[14] = "5587";
  v[15] = "798";
  v[16] = "884";
  v[17] = "671";
  v[18] = "7889";
  cout << myfunction(v);
  return 0;
}
