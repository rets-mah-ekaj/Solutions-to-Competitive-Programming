#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long a, b;
  cin >> a >> b;
  if (a % b == 0 || b % a == 0)
    cout << "Sao Multiplos\n";
  else
    cout << "Nao sao Multiplos\n";
  return 0;
}
