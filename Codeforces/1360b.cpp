#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    vector <int> v(n);
    for (int &i : v)
      cin >> i;
    sort(v.begin(), v.end());
    int result = v[n-1] - v[0];
    for (int i=0; i<n; i++)
      for (int j=i+1; j<n; j++)
        result = result < (v[j] - v[i]) ? result : v[j] - v[i];
    cout << result << '\n';
  }
  return 0;
}
