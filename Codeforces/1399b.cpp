#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, mina, minb;
    long long sum = 0;
    cin >> n;
    vector <int> a(n), b(n);
    for (int i=0; i<n; i++)
      cin >> a[i];
    for (int i=0; i<n; i++)
      cin >> b[i];
    mina = *min_element(a.begin(), a.end());
    minb = *min_element(b.begin(), b.end());
    for (int i=0; i<n; i++)
      sum += max(a[i] - mina, b[i] - minb);
    cout << sum << '\n';
  }
  return 0;
}
