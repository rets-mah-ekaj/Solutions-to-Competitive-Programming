#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    cout << ((n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019) ? "HOSTED\n" : "NOT HOSTED\n");
  }
  return 0;
}
