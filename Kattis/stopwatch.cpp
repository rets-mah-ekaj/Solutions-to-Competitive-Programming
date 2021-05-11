#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  if (t % 2 != 0)
    cout << "still running";
  else {
    int n1, n2, total = 0;
    for (int i = 0; i < t / 2; ++i) {
      cin >> n1 >> n2;
      total += n2 - n1;
    }
    cout << total;
  }
  return 0;
}
