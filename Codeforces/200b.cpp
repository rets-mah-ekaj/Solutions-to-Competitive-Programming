#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  double total = 0, temp;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> temp;
    total += temp;
  }
  cout << total / n;
  return 0;
}
