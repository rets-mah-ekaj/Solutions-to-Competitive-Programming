#include<iostream>
#include<string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int len = s.length(), x = 0, y = 1;
  for (int i = 1; i < len; i++) {
    if (s[i] != s[i-1]) {
      x = max(x, y);
      y = 0;
    }
    y++;
  }
  x = max(x, y);
  cout << x;
}
