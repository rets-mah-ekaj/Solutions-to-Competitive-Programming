#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, flag = 0;
  cin >> a >> b;
  for (int i=0; i<a; i++) {
    if (i % 2 == 0) {
      for (int j=0; j<b; j++)
        cout << '#';
      cout << '\n';
    }
    else {
      if (flag == 0) {
        for (int j=0; j<b-1; j++)
          cout << '.';
        cout << "#\n";
        flag++;
      }
      else {
        cout << "#";
        for (int j=0; j<b-1; j++)
          cout << '.';
        cout << '\n';
        flag--;
      }
    }
  }
  return 0;
}
