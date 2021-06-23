#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double n;
  cin >> n;
  if (n < 0 || n > 100)
    cout << "Fora de intervalo\n";
  else if (n >= 0) {
    if (n >= 25) {
      if (n >= 50) {
        if (n >= 75) {
          if (n == 75)
            cout << "Intervalo (50,75]\n";
          else
            cout << "Intervalo (75,100]\n";
        }
        else if (n == 50)
          cout << "Intervalo (25,50]\n";
        else
          cout << "Intervalo (50,75]\n";
      }
      else if (n == 25)
        cout << "Intervalo [0,25]\n";
      else
        cout << "Intervalo (25,50]\n";
    }
    else
      cout << "Intervalo [0,25]\n";
  }
  return 0;
}
