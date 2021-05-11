#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  if (n >= 1 && n <= 4)
    cout << "few\n";
  else if (n >= 5 && n <= 9)
    cout << "several\n";
  else if (n >= 10 && n <= 19)
    cout << "pack\n";
  else if (n >= 20 && n <= 49)
    cout << "lots\n";
  else if (n >= 50 && n <= 99)
    cout << "horde\n";
  else if (n >= 100 && n <= 249)
    cout << "throng\n";
  else if (n >= 250 && n <= 499)
    cout << "swarm\n";
  else if (n >= 500 && n <= 999)
    cout << "zounds\n";
  else if (n >= 1000)
    cout << "legion\n";
}
