#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  set <int> s;
  int n;
  for (int i=0; i<4; i++) {
    cin >> n;
    s.insert(n);
  }
  cout << 4 - s.size();
  return 0;
}
