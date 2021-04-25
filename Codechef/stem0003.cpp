#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int t = 1;
  for (int i = 3; i <= 12; ++i)
    t *= i;
  cout << t;
  return 0;
}
