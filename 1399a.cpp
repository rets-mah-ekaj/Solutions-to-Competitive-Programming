#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, flag = 1;
    cin >> n;
    vector <int> v(n);
    for (int i=0; i<n; i++)
      cin >> v[i];
    sort(v.begin(), v.end());
    for (int i=0; i<n-1; i++) {
      if (abs(v[i] - v[i+1]) > 1) {
        flag = 0;
        break;
      }
    }
    if (flag == 0)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
}
