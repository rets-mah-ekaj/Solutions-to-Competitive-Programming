#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  long long int n;
  cin >> t;
  while (t--) {
    cin >> n;
    switch (n) {
      case 0 : cout << 0; break;
      case 1 :
      case 2 :
      case 3 : cout << 1; break;
      case 4 : cout << 2; break;
      case 5 : cout << 3; break;
      case 6 : cout << 5; break;
      case 7 : cout << 9; break;
      case 8 : cout << 18; break;
      case 9 : cout << 35; break;
      case 10 : cout << 75; break;
      case 11 : cout << 159; break;
      case 12 : cout << 355; break;
      case 13 : cout << 802; break;
      case 14 : cout << 1858; break;
      case 15 : cout << 4347; break;
      case 16 : cout << 10359; break;
      case 17 : cout << 24894; break;
      case 18 : cout << 60523; break;
      case 19 : cout << 148284; break;
      case 20 : cout << 366319; break;
    }
    cout << '\n';
  }
  return 0;
}
