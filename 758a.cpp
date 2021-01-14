#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, total = 0;
  cin >> n;
  vector <int> v(n);
  for (int i=0; i<n; i++)
    cin >> v[i];
  int welfare = *max_element(v.begin(), v.end());
  for (int i=0; i<n; i++)
    if (v[i] < welfare)
      total += welfare - v[i];
  cout << total;
  return 0;
}
