#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long t, a, b, temp;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    temp = gcd(a, b);
    cout << temp << ' ' << (a * b) / temp << '\n';
  }
  return 0;
}
