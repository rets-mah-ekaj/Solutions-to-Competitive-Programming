#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  cout << ((((n * (n + 1)) / 2) % 2 == 0) ? "black\n" : "grimy\n");
  return 0;
}
