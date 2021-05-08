#include<iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while(t--) {
    int r, c;
    cin >> r >> c;
    for (int i=1; i <= r; i++) {
      for (int j=1; j <= c; j++) {
        if (i == 1 || i == r || j == 1 || j == c)
          cout << "*";
        else
          cout << ".";
      }
      cout << "\n";
    }
    cout << "\n";
  }
  return 0;
}
