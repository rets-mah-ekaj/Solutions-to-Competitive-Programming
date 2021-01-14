#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, temp1, temp2, Mishka = 0, Chris = 0;
  cin >> n;
  while (n--) {
    cin >> temp1 >> temp2;
    if (temp1 < temp2)
      Chris++;
    else if (temp2 < temp1)
      Mishka++;
  }
  if (Mishka > Chris)
    cout << "Mishka";
  else if (Chris > Mishka)
    cout << "Chris";
  else
    cout << "Friendship is magic!^^";
  return 0;
}
