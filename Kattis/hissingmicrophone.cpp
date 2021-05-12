#include<bits/stdc++.h>
using namespace std;

string check(string temp) {
  for (int i = 0; i < temp.length() - 1; ++i)
    if (temp[i] == 's' && temp[i] == temp[i + 1])
      return "hiss";
  return "no hiss";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;
  cout << check(s);
  return 0;
}
