#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, temp, count = 0;
  cin >> n;
  vector <int> h(n), g(n);
  for (int i=0; i<n; i++) {
    cin >> h[i];
    cin >> g[i];
  }
  for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
      if (g[i] == h[j])
        count++;

  cout << count;
  return 0;
}
