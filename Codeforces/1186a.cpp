#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, k;
  cin >> n >> m >> k;
  if (m >= n && k >= n)
    cout << "Yes";
  else
    cout << "No";
  return 0;
}
