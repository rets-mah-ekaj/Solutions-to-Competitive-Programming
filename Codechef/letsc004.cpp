#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, total = 0;
  cin >> n;
  vector <int> v(n);
  for (auto &i : v)
    cin >> i;
    
  sort(v.begin(), v.end());
  for (int i = 0; i < n; ++i)
    v[i] = v[i] * (n - i);

  cout << *max_element(v.begin(), v.end());
  return 0;
}
