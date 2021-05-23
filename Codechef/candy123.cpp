#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, a, b, temp_a, temp_b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    temp_a = sqrt(a);
    temp_b = sqrt(4 * b + 1);

    cout << ((temp_a > ((temp_b - 1) / 2)) ? "Limak" : "Bob") << '\n';
  }
  return 0;
}
