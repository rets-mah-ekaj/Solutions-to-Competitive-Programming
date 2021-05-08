#include<iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  while(true) {
    cin >> n;
    if (n == -1)
      return 0;
    int miles = 0, temp = 0;
    for(int i=0; i<n; i++) {
      int s, t;
      cin >> s >> t;
      t = t - temp;
      miles += s * t;
      temp = t;
    }
    cout << miles << " miles\n";
  }
}
