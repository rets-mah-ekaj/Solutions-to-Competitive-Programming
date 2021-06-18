#include<bits/stdc++.h>
using namespace std;

long absolute(long v) {
  if (v < 0)
    return v * -1;
  return v;
}

long maxi(long x, long y) {
  return (x + y + absolute(x - y)) / 2;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long a, b, c;
    cin >> a >> b >> c;
    cout << maxi(maxi(a, b), c) << " eh o maior\n";

    return 0;
}
