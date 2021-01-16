#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int j, k, n;
  cin >> n;
  vector <int> v(n);
  for(auto &item : v)
      cin >> item;
  long long int count = 1, maxval = 1;

  for (int i = 1; i < n; ++i) {
    if (v[i] > v[i - 1])
      ++count;
    else {
      maxval = max(count, maxval);
      count = 1;
    }
  }
  maxval = max(count, maxval);
  cout << maxval;
  return 0;
}
