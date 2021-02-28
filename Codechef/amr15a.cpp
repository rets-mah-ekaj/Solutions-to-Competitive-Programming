#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, temp, odd = 0, even = 0;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> temp;
    if (temp % 2 == 0)
      even++;
    else
      odd++;
  }
  if (even > odd)
    cout << "READY FOR BATTLE\n";
  else
    cout << "NOT READY\n";
  return 0;
}
