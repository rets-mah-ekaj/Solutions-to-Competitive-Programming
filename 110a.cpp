#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int n, count = 0;
  cin >> n;
  while (n) {
    if (n % 10 == 4 || n % 10 == 7)
      count++;
    n /= 10;
  }
  if (count == 4 || count == 7)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
