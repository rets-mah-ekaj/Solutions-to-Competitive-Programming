#include<bits/stdc++.h>
using namespace std;

long long myfunction(long long x) {
  return ((x * (x + 1) * (x + 2)) / 6);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cout << myfunction(6);
  return 0;
}
